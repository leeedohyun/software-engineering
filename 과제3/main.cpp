#include <iostream>
#include <fstream>

#include "SignUp.h"
#include "SignUpUI.h"
#include "Member.h"
#include "RecruitInfoSearchUI.h"
#include "RecruitInfoSearch.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

ifstream in_fp;
ofstream out_fp;
vector<Member*> members;

void join()
{
    int memberType;

    SignUpUI* signUpUi = new SignUpUI();
    SignUp* signUp = new SignUp();

    signUp->start();

    in_fp >> memberType;

    if (memberType == 1)
    {
        signUpUi->inputCompanyMemberInfo();
    }
    if (memberType == 2)
    {
        signUpUi->inputGeneralMemberInfo();
    }
};

void search()
{
    RecruitInfoSearchUI* recruitInfoSearchUi = new RecruitInfoSearchUI();
    RecruitInfoSearch *recruitInfoSearch = new RecruitInfoSearch();

    recruitInfoSearch->start();
    recruitInfoSearchUi->inputCompanyName();
}

void exit()
{
    cout << "6.1. 종료";
    out_fp.write("6.1. 종료", 7);
}

void doTask()
{
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (is_program_exit == 0)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        in_fp >> menu_level_1;
        in_fp >> menu_level_2;

        // 메뉴 구분 및 해당 연산 수행
        // 1. 회원가입 & 회원탈퇴
        switch (menu_level_1)
        {
            case 1:
            {
                switch (menu_level_2)
                {
                    case 1:
                        join();
                        break;
                }
            }
            case 4:
            {
                switch (menu_level_2) {
                    case 1:
                        search();
                        break;
                }
            }
        }
    }
}

int main()
{
    in_fp.open("C:\\input.txt", ios::in);
    out_fp.open("C:\\output.txt", ios::out);

    if (!in_fp.is_open()) {
        cerr << "Could not open the file - '" << INPUT_FILE_NAME << "'" << endl;
        return EXIT_FAILURE;
    }

    doTask();

    in_fp.close();
    out_fp.close();

    return 0;
}
