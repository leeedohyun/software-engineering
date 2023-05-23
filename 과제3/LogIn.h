#ifndef UNTITLED_LOGIN_H
#define UNTITLED_LOGIN_H

#include "common.h"
#include "Member.h"

class LogIn
{
private:
    Member* member;

public:
    bool makeLogInInfo(string id, string pw);
    void getUI();
};

#endif