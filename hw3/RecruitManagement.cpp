#include <string>
#include <vector>
#include "RecruitManagement.h"

string Member::getID()
{
    return ID;
}

int Member::getMemberType()
{
    return memberType;
}

RegisterRecruitUI::RegisterRecruitUI(RegisterRecruit* refRegisterRecruit)
{
    pRegisterRecruit = refRegisterRecruit;
}

void RegisterRecruitUI::startInterface()
{
    out_fp << "3.1. 채용 정보 등록\n";
    createNewRecruit();
}

void RegisterRecruitUI::createNewRecruit()
{
    string task;
    int numberOfPeople;
    string deadline;
    in_fp >> task >> numberOfPeople >> deadline;
    pRegisterRecruit->registerNewRecruit(task, numberOfPeople, deadline);
}

RegisterRecruit::RegisterRecruit(CompanyMember* refCompanyMember)
{
    pCompanyMember = refCompanyMember;
}

void RegisterRecruit::registerNewRecruit(string task, int numberOfPeople, string deadline)
{
    RecruitInfo* newRecruitInfo = new RecruitInfo(task, numberOfPeople, deadline);
    pCompanyMember->getOwnedRecruitInfoCollection().addRecruitInfo(newRecruitInfo);
}

CheckRecruitUI::CheckRecruitUI(CheckRecruit* refCheckRecruit)
{
    pCheckRecruit = refCheckRecruit;
}

void CheckRecruitUI::requestCheckRecruit()
{
    out_fp << "3.2. 등록된 채용 정보 조회\n";
    pCheckRecruit->showRecruits();
}

CheckRecruit::CheckRecruit(CompanyMember* refCompanyMember)
{
    pCompanyMember = refCompanyMember;
}

void CheckRecruit::showRecruits()
{
    RecruitInfoCollection recruitInfoCollection = pCompanyMember->getOwnedRecruitInfoCollection();
    vector<RecruitInfo*> recruits = recruitInfoCollection.getOwnedRecruitInfo();
    int recruitSize = 0;
    recruitSize = recruits.size();
    for (int i = 0; i < recruitSize; i++)
        out_fp << recruits[i]->getRecruitName() << endl;
}

RecruitInfo::RecruitInfo(string task, int numberOfPeople, string deadline)
{
    task = task;
    numberOfPeople = numberOfPeople;
    deadline = deadline;
    deadlineStatus = false;
    companyName = "";
}

string RecruitInfo::getRecruitName()
{
    string result = task + " " + to_string(numberOfPeople) + " " + deadline;
    return result;
}

string RecruitInfo::getDeadline()
{
    return deadline;
}

CompanyMember::CompanyMember(string ID, string password):Member(ID, password)
{
    
}

string CompanyMember::getMemberID()
{
    return getID();
}

RecruitInfoCollection CompanyMember::getOwnedRecruitInfoCollection()
{
    return ownedRecruitInfoCollection;
}

vector<RecruitInfo*> RecruitInfoCollection::getOwnedRecruitInfo()
{
    return ownedRecruitInfo;
}

void RecruitInfoCollection::addRecruitInfo(RecruitInfo* recruitInfo)
{
    ownedRecruitInfo.push_back(recruitInfo);
}