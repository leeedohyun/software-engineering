#include "LogOut.h"

extern Member* currentMember;
extern ofstream out_fp;

string LogOut::showLogOutDonePage()
{
    return currentMember->getId();
}

LogOutUI* LogOut::getUI()
{
    return logOutUI;
}