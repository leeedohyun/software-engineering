#ifndef __LOGIN_H__
#define __LOGIN_H__

#include <iostream>
#include <string>

#include "Member.h"

using namespace std;


/**
* stereotype: Control
* 로그인 역할 수행
*/
class LogIn
{
public:
    bool makeLogInInfo(string id, string pw);
    void getUI();
};

#endif