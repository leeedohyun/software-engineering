#include "SignUpUI.h"

#define SPACE " "
#define ENTER "\n"

extern ifstream in_fp;
extern ofstream out_fp;
extern const int GENERAL_MEMBER_TYPE;

void SignUpUI::startInterface() {
    cout << "1.1. 회원가입" << endl;
}

void SignUpUI::inputGeneralMemberInfo() {
    string line;

    string name = "";
    string socialSecurityNumber = "";
    string id = "";
    string password = "";

    getline(in_fp, line);

    stringstream ss(line);
    ss >> name >> socialSecurityNumber >> id >> password;

    if (name == "" || socialSecurityNumber == "" || id == "" || password == "") {
        cout << "입력형식이 맞지 않습니다." << endl << endl;
        return;
    }

    signUpControl->createGenerateMember(name, socialSecurityNumber, id, password);

    cout << 2 << " " << name << " " << socialSecurityNumber << " " << id << " " << password << endl;
    out_fp.write("2 ",2);
    out_fp.write(name.c_str(), name.size());
    out_fp.write(SPACE, 1);
    out_fp.write(socialSecurityNumber.c_str(), socialSecurityNumber.size());
    out_fp.write(SPACE, 1);
    out_fp.write(id.c_str(), id.size());
    out_fp.write(SPACE, 1);
    out_fp.write(password.c_str(), password.size());
    out_fp.write(ENTER, 1);
}