#include "common.h"
#include "LogInUI.h"

using namespace std;
extern fstream in_fp;
extern ofstream out_fp;

void LogInUI::startInterface()
{
    string tempId, tempPw;
    out_fp << "2.1. 로그인" << endl << "정보를 입력하세요." << "> ";
    in_fp >> tempId >> tempPw;


    out_fp << tempId << " " << tempPw << endl;
    insertInfo(tempId, tempPw);

}

void LogInUI::insertInfo(string id, string pw)
{
    switch(logIn->makeLogInInfo(id, pw))
    {
        case true:
            out_fp << "로그인 되었습니다.\n";
            break;
        case false:
            out_fp << "로그인에 실패하였습니다. 다시 입력하여 주십시오.\n";
            startInterface();
            break;
    }
}
