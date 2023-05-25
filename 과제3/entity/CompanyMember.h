#pragma once
#include <iostream>
#include <string>

#include "Member.h"
#include "RecruitInfo.h"

using namespace std;

#ifndef __COMPANYMEMBER_H__
#define ___COMPANYMEMBER_H__


/**
* stereotype: Entity
* 회원 정보를 상속받아 회사 회원의 정보를 저장
*/
class CompanyMember : public Member
{
private:
    string businessNumber;
    vector<RecruitInfo*> ownedRecruitInfoCollection;

public:
    CompanyMember(string id, string password);
    CompanyMember(string companyName, string businessNumber, string id, string password);
    vector<RecruitInfo*> getOwnedRecruitInfoCollection();
    void addRecruitInfo(RecruitInfo* recruitInfo);
    string getBusinessNumber();
};


#endif
