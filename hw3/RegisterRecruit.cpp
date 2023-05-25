#include "RegisterRecruit.h"
#include "RegisterRecruitUI.h"

extern ofstream out_fp;

RegisterRecruit::RegisterRecruit(CompanyMember* refCompanyMember)
{
    pCompanyMember = refCompanyMember;
}

void RegisterRecruit::registerNewRecruit(string task, int numberOfPeople, string deadline)
{
    RecruitInfo* newRecruitInfo = new RecruitInfo(task, numberOfPeople, deadline , pCompanyMember->getName(), pCompanyMember->getBusinessNumber());
    pCompanyMember->addRecruitInfo(newRecruitInfo);
}

void  RegisterRecruit::start()
{
    RegisterRecruitUI* registerRecruitUi = new RegisterRecruitUI();
    registerRecruitUi->startInterface();
}