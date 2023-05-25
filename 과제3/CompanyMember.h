#include "common.h"
#include "Member.h"

#ifndef UNTITLED_COMPANYMEMBER_H
#define UNTITLED_COMPANYMEMBER_H


class CompanyMember : public Member {
private:
    string businessNumber;
    //RecruitInfo* ownedRecruitInfo;

public:
    CompanyMember(string companyName, string businessNumber, string id, string password);
    //RecruitInfo* getOwnedRecruitInfo();
    string getBusinessNumber();
};


#endif //UNTITLED_COMPANYMEMBER_H
