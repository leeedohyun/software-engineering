#ifndef __LOGOUT___
#define __LOGOUT___
#include "common.h"
#include "Member.h"
#include "LogOutUI.h"

class LogOut{
private:
    LogOutUI* logOutUI;
    Member* member;
public:
    LogOut();
    void showLogOutDonePage();
    LogOutUI* getUI();
};

#endif