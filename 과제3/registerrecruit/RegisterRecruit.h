#pragma once
#include "common.h"
#include "CompanyMember.h"

#ifndef __REGISTERRECRUIT_H__
#define __REGISTERRECRUIT_H__


/**
* stereotype: Control
* 채용 등록 수행
*/
class RegisterRecruit
{
private:
    CompanyMember* pCompanyMember;

public:
    RegisterRecruit(CompanyMember* refCompanyMember);
    void registerNewRecruit(string task, int numberOfPeople, string deadline);
    void start();
};


#endif 
