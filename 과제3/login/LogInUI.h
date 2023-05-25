#include "common.h"
#include "LogIn.h"

#ifndef __LOGINUI_H__
#define __LOGINUI_H__


/**
* stereotype: Boundary
* 로그인과 관려된 입출력 담당
*/
class LogInUI
{
private:
    LogIn* pLogIn;

public:
    void insertInfo();
    void startInterface();
};

#endif