#include "LogOutUI.h"
#include "LogOut.h"

extern fstream in_fp;
extern ofstream out_fp;

void LogOutUI::startInterface()
{
    cout << "로그아웃" << endl;
    out_fp << "2.2. 로그아웃" << endl;
}

void LogOutUI::proceedToLogOut()
{
    LogOut* logOut = new LogOut();
    out_fp << "> " << logOut->showLogOutDonePage() << endl << endl;
    cout << "> " << logOut->showLogOutDonePage() << endl << endl;
}