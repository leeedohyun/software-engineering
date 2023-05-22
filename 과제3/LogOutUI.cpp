#include <iostream>
#include <fstream>
#include "TestHeader.h"

using namespace std;
extern fstream in_fp;
extern ofstream out_fp;

void LogOutUI::startInterface()
{
    out_fp << "2.2. 로그아웃" << "> ";
    proceedToLogOut();

}

void LogOutUI::proceedToLogOut()
{
    logOut->showLogOutDonePage();
}