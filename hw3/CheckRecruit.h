#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "CompanyMember.h"

using namespace std;

#ifndef UNTITLED_CHECKRECRUIT_H
#define UNTITLED_CHECKRECRUIT_H


class CheckRecruit
{
private:
    CompanyMember* pCompanyMember;
public:
    CheckRecruit(CompanyMember* refCompanyMember);
    void showRecruits();
};



#endif //UNTITLED_CHECKRECRUIT_H
