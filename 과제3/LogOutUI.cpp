#include <iostream>
#include "TestHeader.h"

using namespace std;

void LogOutUI::startInterface()
{
    cout << "2.2. 로그아웃" << "> ";
    proceedToLogOut();

}

void LogOutUI::proceedToLogOut()
{
    logOut->showLogOutDonePage();
}