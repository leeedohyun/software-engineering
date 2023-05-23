#include "common.h"
#include "LogOut.h"
#ifndef __LOGOUTUI___
#define __LOGOUTUI___

class LogOutUI
{
private:
    LogOut* logOut;
public:
    LogOutUI();
    void startInterface();
    void proceedToLogOut();
};

#endif