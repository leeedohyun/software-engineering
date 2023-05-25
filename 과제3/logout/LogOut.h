#ifndef __LOGOUT_H__
#define __LOGOUT_H__

#include "common.h"
#include "Member.h"
#include "LogOutUI.h"


/**
* stereotype: Control
* 로그아웃 역할 수행
*/
class LogOut
{
private:
    LogOutUI* pLogOutUI;

public:
    string showLogOutDonePage();
    LogOutUI* getUI();
};

#endif