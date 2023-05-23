#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

static ifstream in_fp;
static ofstream out_fp;


class Member
{
private:
    string ID;
    string password;
    int memberType;
    string name = " ";

public:
    Member(string ID, string password);
    Member(string ID, string password, int memberType);
    Member(string name, string id, string password, int memberType);
    void deleteMember();
    bool isInfoValid(string id, string pw);
    string getID();
    int getMemberType();
    string getPassword();
};

//class ApplyInfoCollection
//{
//
//};

class RecruitInfo
{
private:
    int numberOfPeople;
    string deadline;
    string task;
    bool deadlineStatus;
    string companyName;
    //ApplyInfoCollection ownedApplyInfoCollection;
public:
    RecruitInfo(string task, int numberOfPeople, string deadline);
    string* getDetails();
    string getRecruitName();
    string getDeadline();
};

class RecruitInfoCollection
{
private:
    vector<RecruitInfo*> ownedRecruitInfo;
public:
    vector<RecruitInfo*> getOwnedRecruitInfo();
    void addRecruitInfo(RecruitInfo* recruitInfo);
};

class CompanyMember : public Member
{
private:
    string buisnessMember;
    string companyName;
    RecruitInfoCollection ownedRecruitInfoCollection;
public:
    CompanyMember(string ID, string password);
    RecruitInfoCollection getOwnedRecruitInfoCollection();
    string getMemberID();
};

class RegisterRecruit
{
private:
    CompanyMember* pCompanyMember;
public:
    RegisterRecruit(CompanyMember* refCompanyMember);
    void registerNewRecruit(string task, int numberOfPeople, string deadline);
};

class RegisterRecruitUI
{
private:
    RegisterRecruit* pRegisterRecruit;
public:
    RegisterRecruitUI(RegisterRecruit* refRegisterRecruit);
    void createNewRecruit();
    void startInterface();
};

class CheckRecruit
{
private:
    CompanyMember* pCompanyMember;
public:
    CheckRecruit(CompanyMember* refCompanyMember);
    void showRecruits();
};

class CheckRecruitUI
{
private:
    CheckRecruit* pCheckRecruit;
public:
    CheckRecruitUI(CheckRecruit* refCheckRecruit);
    void requestCheckRecruit();
};