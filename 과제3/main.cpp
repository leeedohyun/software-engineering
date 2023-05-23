#include "common.h"
#include "Member.h"
#include "LogIn.h"
#include "LogOut.h"
#include "DeleteAccount.h"
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

ifstream in_fp;
ofstream out_fp;
static vector<Member*> memberList;
static Member* currentMember;

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
        switch (menu_level_1)
        {
            case 1:
            {
                switch (menu_level_2)
                {
                    case 1:
                        out_fp << "1.1. 회원가입" << endl;
                        break;
                    case 2:
                        DeleteAccount* deleteAccount = new DeleteAccount();
                        deleteAccount->getUI()->startInterface();                    
                        break;
                }
            }
            case 2:
            {
                switch (menu_level_2)
                {
                    case 1:
                        LogIn* logIn = new LogIn();
                        logIn->getUI()->startInterface();
                        break;
                    case 2:
                        LogOut* logOut = new LogOut();
                        logOut->getUI()->startInterface();
                        break;
                }
            }
            case 3:
            {
                switch (menu_level_2)
                {
                    case 1:
                        out_fp << "3.1.\n";
                        break;
                    case 2:
                        out_fp << "3.2.\n";
                        break;
                }
            }
            case 4:
            {
                switch (menu_level_2)
                {
                    case 1:
                        out_fp << "4.1.\n";
                        break;
                    case 2:
                        out_fp << "4.2.\n";
                        break;
                }
            }
            case 5:
            {
                out_fp << "5.1.\n";
            }
            case 6:
            {
                out_fp << "6.1.\n";
                is_program_exit = 1;
            }
        }
    }
}

int main()
{
    
    in_fp.open(INPUT_FILE_NAME, ios::in);
    out_fp.open(OUTPUT_FILE_NAME, ios::out);
    int menu_level_1, menu_level_2;

    if (!in_fp.is_open()) {
        cerr << "Could not open the file - '" << INPUT_FILE_NAME << "'" << endl;
        return EXIT_FAILURE;
    }

    while(!in_fp.eof())
    {
        char arr[256];
        in_fp.getline(arr, 256);

         
        in_fp >> menu_level_1;
        in_fp >> menu_level_2;

        doTask();
    }
    in_fp.close();
    out_fp.close();
    
    return 0;
}