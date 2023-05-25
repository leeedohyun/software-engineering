#include "SignUpUI.h"

extern ifstream in_fp;
extern ofstream out_fp;
extern const int GENERAL_MEMBER_TYPE;

/**
 * 함수 이름: SignUpUI::startInterface()
 * 기능: 회원 가입 결과 문구 출력
 */
void SignUpUI::startInterface()
{
    cout << "1.1. 회원가입" << endl;
    out_fp << "1.1. 회원가입" << endl;
}

/**
 * 함수 이름: SignUpUI::inputGeneralMemberInfo()
 * 기능: 회원 가입하기 위해 필요한 일반 회원의 정보 입력하고 회원 가입이 완료된 후 회원의 정보 출력
 */
void SignUpUI::inputGeneralMemberInfo()
{
    string line;

    string name = "";
    string socialSecurityNumber = "";
    string id = "";
    string password = "";

    in_fp >> name >> socialSecurityNumber >> id >> password;

    if (name == "" || socialSecurityNumber == "" || id == "" || password == "") {
        cout << "입력형식이 맞지 않습니다." << endl << endl;
        return;
    }

    pSignUpControl->createGeneralMember(name, socialSecurityNumber, id, password);

    cout << 2 << " " << name << " " << socialSecurityNumber << " " << id << " " << password << endl << endl;
    out_fp << "> 2 " << name << " " << socialSecurityNumber << " " << id << " " << password << " " << endl << endl;
}

/**
 * 함수 이름: SignUpUI::inputGeneralCompanyInfo()
 * 기능: 회원 가입하기 위해 필요한 회사 회원의 정보 입력하고 회원 가입이 완료된 후 회원의 정보 출력
 */
void SignUpUI::inputCompanyMemberInfo()
{
    string line;

    string companyName = "";
    string businessNumber = "";
    string id = "";
    string password = "";

    in_fp >> companyName >> businessNumber >> id >> password;

    if (companyName == "" || businessNumber == "" || id == "" || password == "") {
        cout << "입력형식이 맞지 않습니다." << endl << endl;
        return;
    }

    pSignUpControl->createCompanyMember(companyName, businessNumber, id, password);

    cout << 1 << " " << companyName << " " << businessNumber << " " << id << " " << password << endl << endl;
    out_fp << "> 1 " << companyName << " " << businessNumber << " " << id << " " << password << endl << endl;
}