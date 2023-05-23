#ifndef __LOGIN___
#define __LOGIN___
#include "common.h"
#include "Member.h"
#include "LogInUI.h"

class LogIn
{
private:
    LogInUI* logInUI;
    Member* member;
public:
    LogIn();
    bool makeLogInInfo(string id, string pw);
    LogInUI* getUI();
};

#endif