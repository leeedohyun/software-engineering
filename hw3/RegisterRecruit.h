#pragma once
#include "common.h"
#include "CompanyMember.h"

#ifndef UNTITLED_REGISTERRECRUIT_H
#define UNTITLED_REGISTERRECRUIT_H


class RegisterRecruit
{
private:
    CompanyMember* pCompanyMember;

public:
    RegisterRecruit();
    RegisterRecruit(CompanyMember* refCompanyMember);
    void registerNewRecruit(string task, int numberOfPeople, string deadline);
    void start();
};


#endif //UNTITLED_REGISTERRECRUIT_H
