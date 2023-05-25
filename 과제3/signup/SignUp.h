#include "common.h"

#ifndef __SIGNUP_H__
#define __SIGNUP_H__

/**
* stereotype: Control
* 회원 가입 역할 수행
*/
class SignUp
{
public:
    void start();
    void createGeneralMember(string name, string socialSecurityNumber, string id, string password);
    void createCompanyMember(string companyName, string businessNumber, string id, string password);
};


#endif
