#include "common.h"
#include "LogIn.h"
#ifndef __LOGINUI___
#define __LOGINUI___


class LogInUI
{
private:
    LogIn* logIn;
public:
    LogInUI();
    void insertInfo(string id, string pw);
    void startInterface();
};

#endif