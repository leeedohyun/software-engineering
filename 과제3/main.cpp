#include <iostream>
#include <fstream>

#include "signup/SignUp.h"
#include "signup/SignUpUI.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

ifstream in_fp;
ofstream out_fp;

void join()
{
    int memberType;

    SignUpUI* signUpUi = new SignUpUI();
    SignUp* signUp = new SignUp();

    signUp->start();

    in_fp >> memberType;

    if (memberType == 2)
    {
        signUpUi->inputGeneralMemberInfo();
    }
};

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
        }
    }
}

int main()
{
    in_fp.open(INPUT_FILE_NAME, ios::in);
    out_fp.open(OUTPUT_FILE_NAME, ios::out);

    if (!in_fp.is_open()) {
        cerr << "Could not open the file - '" << INPUT_FILE_NAME << "'" << endl;
        return EXIT_FAILURE;
    }

    doTask();

    in_fp.close();
    out_fp.close();

    return 0;
}
