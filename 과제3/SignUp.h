#include "common.h"

#ifndef UNTITLED_SIGNUP_H
#define UNTITLED_SIGNUP_H


class SignUp {
public:
    void start();
    void createGenerateMember(string name, string socialSecurityNumber, string id, string password);
    void createCompanyMember(string companyName, string businessNumber, string id, string password);
};


#endif //UNTITLED_SIGNUP_H
