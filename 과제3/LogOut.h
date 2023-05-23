#ifndef UNTITLED__LOGOUT_H
#define UNTITLED__LOGOUT_H

#include "common.h"
#include "Member.h"
#include "LogOutUI.h"

class LogOut{
private:
    LogOutUI* logOutUI;
    Member* member;

public:
    string showLogOutDonePage();
    LogOutUI* getUI();
};

#endif