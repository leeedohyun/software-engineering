#include <iostream>
#include "LogIn.h"
#include "MemberList.h"
using namespace std;


void LogIn::showMainPage()
{
    if(memberList->isInfoValid())
    {
        cout << "로그인 되었습니다." << endl;
        cout << "로그인 되었습니다." << endl;

    }
    else
    {
        cout << "Invalid information!" << endl;
    }

}