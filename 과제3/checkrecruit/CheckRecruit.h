#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "CompanyMember.h"

using namespace std;

#ifndef __CHECKRECRUIT_H__
#define __CHECKRECRUIT_H__

/**
* sterotype: Control
* 회사 회원이 등록한 채용 정보를 조회하는 역할
*/
class CheckRecruit
{
private:
    CompanyMember* pCompanyMember;

public:
    CheckRecruit(CompanyMember* refCompanyMember);
    vector<RecruitInfo*> showRecruits();
};


#endif
