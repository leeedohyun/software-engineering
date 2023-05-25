#include "LogInUI.h"

extern ifstream in_fp;
extern ofstream out_fp;

/**
 * 함수 이름: LogInUI::startInterface()
 * 기능: 로그인 문구 출력
 */
void LogInUI::startInterface()
{
    cout << "로그인" << endl;
    out_fp << "2.1. 로그인" << endl;
}

/**
 * 함수 이름: LogInUI::insertInfo()
 * 기능: 아이디와 비밀번호를 입력받고, 로그인하는 회원의 아이디와 비밀번호를 출력
 */
void LogInUI::insertInfo()
{
    string tempId, tempPw;

    in_fp >> tempId >> tempPw;

    if (pLogIn->makeLogInInfo(tempId, tempPw)) {
        cout << "> " << tempId << " " << tempPw << endl << endl;
        out_fp << "> " << tempId << " " << tempPw << endl << endl;
    } else {
        cout << "로그인에 실패하였습니다.\n";
        out_fp << "로그인에 실패하였습니다.\n";
    }
}
