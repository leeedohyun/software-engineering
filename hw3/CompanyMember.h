#pragma once
#include <iostream>
#include <string>

#include "Member.h"
#include "RecruitInfo.h"

using namespace std;

#ifndef UNTITLED_COMPANYMEMBER_H
#define UNTITLED_COMPANYMEMBER_H

class CompanyMember : public Member {
private:
    string businessNumber;
    //RecruitInfoCollection ownedRecruitInfoCollection;
    vector<RecruitInfo*> ownedRecruitInfoCollection;

public:
    CompanyMember(string id, string password);
    CompanyMember(string companyName, string businessNumber, string id, string password);
    //RecruitInfoCollection getOwnedRecruitInfoCollection();
    vector<RecruitInfo*> getOwnedRecruitInfoCollection();
    void addRecruitInfo(RecruitInfo* recruitInfo);
    string getBusinessNumber();
};


#endif //UNTITLED_COMPANYMEMBER_H
