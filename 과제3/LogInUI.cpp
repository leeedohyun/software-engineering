#include <iostream>
#include "TestHeader.h"
using namespace std;


void LogInUI::startInterface()
{
    string tempId, tempPw;
    cout << "2.1. 로그인" << endl << "정보를 입력하세요." << "> ";
    cin >> tempId >> tempPw;


    cout << tempId << " " << tempPw << endl;
    insertInfo(tempId, tempPw);

}

void LogInUI::insertInfo(string id, string pw)
{
    switch(logIn->makeLogInInfo(id, pw))
    {
        case true:
            cout << "로그인 되었습니다." << endl;
            break;
        case false:
            cout << "로그인에 실패하였습니다. 다시 입력하여 주십시오." << endl << endl;
            startInterface();
            break;
    }
}
