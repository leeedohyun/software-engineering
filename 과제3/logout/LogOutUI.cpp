#include "LogOutUI.h"
#include "LogOut.h"

extern fstream in_fp;
extern ofstream out_fp;

/**
 * 함수 이름: LogOutUI::startInterface()
 * 기능: 로그아웃 문구 출력
 */
void LogOutUI::startInterface()
{
    cout << "로그아웃" << endl;
    out_fp << "2.2. 로그아웃" << endl;
}

/**
 * 함수 이름: LogOutUI::proceedToLogOut()
 * 기능: 로그아웃하는 회원의 아이디와 비밀번호 출력
 */
void LogOutUI::proceedToLogOut()
{
    LogOut* logOut = new LogOut();
    out_fp << "> " << logOut->showLogOutDonePage() << endl << endl;
    cout << "> " << logOut->showLogOutDonePage() << endl << endl;
}