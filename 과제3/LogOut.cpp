#include "common.h"
#include "LogOut.h"


extern ofstream out_fp;

void LogOut::showLogOutDonePage()
{
    out_fp << "로그아웃 되었습니다." << endl;
}

LogOutUI* LogOut::getUI()
{
    return logOutUI;
}