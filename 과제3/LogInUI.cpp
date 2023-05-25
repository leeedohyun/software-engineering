#include "common.h"
#include "LogInUI.h"

extern fstream in_fp;
extern ofstream out_fp;

void LogInUI::startInterface()
{
    cout << "로그인" << endl;
    out_fp << "2.1. 로그인" << endl;
}

void LogInUI::insertInfo()
{
    string tempId, tempPw;
    in_fp >> tempId >> tempPw;

    cout << tempId << " " << tempPw;

    if (logIn->makeLogInInfo(tempId, tempPw)) {
        cout << tempId << " " << tempPw << endl << endl;
        out_fp << "> " << tempId << " " << tempPw << endl << endl;
    } else {
        cout << "로그인에 실패하였습니다.\n";
        out_fp << "로그인에 실패하였습니다.\n";
    }
}
