#include <iostream>
#include <fstream>
#include <vector>
#include "RecruitManagement.h"
#include "RecruitManagement.cpp"
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;


// vector<GeneralMember*> generalMembers;
vector<CompanyMember*> companyMembers;
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
                break;
            }
        }
        case 2:
        {
            switch (menu_level_2)
            {
            case 1:
                out_fp << "2.1. 회원가입" << endl;
                break;
            case 2:
                break;
            }
        }
        case 3:
        {
            switch (menu_level_2)
            {
            case 1:
            {
                if (currentMember->getMemberType() == 2) {
                    out_fp << "일반 회원은 채용등록을 할 수 없습니다." << endl;
                }
                else {
                    int memberSize = companyMembers.size();
                    for (int i = 0; i < memberSize; i++)
                    {
                        if (currentMember->getID() == companyMembers[i]->getID())
                        {
                            CompanyMember* companyMember = companyMembers[i];
                            RegisterRecruit* registerRecruit = new RegisterRecruit(companyMember);
                            RegisterRecruitUI* registerRecruitUI = new RegisterRecruitUI(registerRecruit);
                            registerRecruitUI->startInterface();
                            break;
                        }
                    }
                }
                break;
            }
            case 2:
            {
                int memberSize = companyMembers.size();
                for (int i = 0; i < memberSize; i++)
                {
                    if (currentMember->getID() == companyMembers[i]->getID())
                    {
                        CompanyMember* companyMember = companyMembers[i];
                        CheckRecruit* checkRecruit = new CheckRecruit(companyMember);
                        CheckRecruitUI* checkRecruitUI = new CheckRecruitUI(checkRecruit);
                        checkRecruitUI->requestCheckRecruit();
                        break;
                    }
                }
                break;
            }
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
    //int menu_level_1, menu_level_2;

    if (!in_fp.is_open()) {
        cerr << "Could not open the file - '" << INPUT_FILE_NAME << "'" << endl;
        return EXIT_FAILURE;
    }

    doTask();

    in_fp.close();
    out_fp.close();

    return 0;
}