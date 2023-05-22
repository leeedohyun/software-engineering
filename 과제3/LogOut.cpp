#include <iostream>
#include "TestHeader.h"
#include <fstream>
extern ofstream out_fp;

using namespace std;

void LogOut::showLogOutDonePage()
{
    out_fp << "로그아웃 되었습니다." << endl;
}