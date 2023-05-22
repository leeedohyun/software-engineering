#include <iostream>
#include "LogOutUI.h"

using namespace std;

void LogOutUI::startInterface()
{
    cout << "로그아웃 하시겠습니까?" << endl;
}

void LogOutUI::proceedToLogOut()
{
    logOut->showLogOutDonePage();
}