#include "common.h"
#include "SignUp.h"
#include "Member.h"
#include "SignUpUI.h"
#include "RecruitInfoSearchUI.h"
#include "RecruitInfoSearch.h"
#include "DeleteAccount.h"
#include "LogIn.h"
#include "LogOut.h"
#include "LogInUI.h"
#include "LogOutUI.h"
#include "RegisterRecruit.h"
#include "RegisterRecruitUI.h"
#include "GeneralMember.h"
#include "CompanyMember.h"
#include "SignUpUI.h"
#include "SignUp.h"
#include "CheckRecruit.h"
#include "CheckRecruitUI.h"
#include "RecruitInfoSearchUI.h"
#include "RecruitInfoSearch.h"
#include "ApplyUI.h"
#include "Apply.h"
#include "DeleteAccount.h"
#include "CheckApplyUI.h"
#include "StatisticsOfApplyUI.h"
#include "StatisticsOfApply.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

ifstream in_fp;
ofstream out_fp;
vector<Member*> members;
Member* currentMember;

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
    else if (memberType == 2)
    {
        signUpUi->inputGeneralMemberInfo();
    }
}

void logIn()
{
    LogInUI* logInUi = new LogInUI();
    LogIn* logIn = new LogIn();

    logIn->getUI();
    logInUi->insertInfo();
}

void logOut()
{
    LogOut* logOut = new LogOut();
    LogOutUI* logOutUi = new LogOutUI();

    logOut->getUI()->startInterface();
    logOutUi->proceedToLogOut();
}

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

        // 1. 회원가입 & 회원탈퇴
        if (menu_level_1 == 1) {
            if (menu_level_2 == 1) {
                join();
            } else if (menu_level_2 == 2) {
                DeleteAccount* deleteAccount = new DeleteAccount();
                DeleteAccountUI* deleteAccountUi = new DeleteAccountUI();

                deleteAccount->getUI();
                deleteAccountUi->proceedToDelete();
            }
        }
        // 2. 로그인 & 로그아웃
        else if (menu_level_1 == 2) {
            if (menu_level_2 == 1) {
                logIn();
            } else if (menu_level_2 == 2) {
                logOut();
            }
        }
        // 3. 채용 정보 등록 & 등록한 채용 정보 조회
        else if (menu_level_1 == 3) {
            if (menu_level_2 == 1) {
                if (currentMember->getMemberType() == 2) {
                    out_fp << "권한이 없습니다." << endl;
                }
                else {
                    for (int i = 0; i < members.size(); i++)
                    {
                        if (currentMember->getId() == members[i]->getId())
                        {
                            CompanyMember* companyMember = dynamic_cast<CompanyMember*>(currentMember);
                            RegisterRecruit* registerRecruit = new RegisterRecruit(companyMember);
                            RegisterRecruitUI *registerRecruitUI = new RegisterRecruitUI(registerRecruit);
                            registerRecruit->start();
                            registerRecruitUI->createNewRecruit();
                        }
                    }
                }
            } else if (menu_level_2 == 2) {
                for (int i = 0; i < members.size(); i++)
                {
                    if (currentMember->getId() == members[i]->getId())
                    {
                        CompanyMember* companyMember = dynamic_cast<CompanyMember*>(members[i]);
                        CheckRecruit* checkRecruit = new CheckRecruit(companyMember);
                        CheckRecruitUI* checkRecruitUI = new CheckRecruitUI(checkRecruit);
                        checkRecruitUI->requestCheckRecruit();
                    }
                }
            }
        } else if (menu_level_1 == 4) {
            if (menu_level_2 == 1) {            // 채용 검색
                search();
            } else if (menu_level_2 == 2) {
                ApplyUI *applyUi = new ApplyUI();
                Apply *apply = new Apply();

                apply->start();
                applyUi->applyNewRecruitment();
            } else if (menu_level_2 == 3) {
                CheckApplyUI *checkApplyUi = new CheckApplyUI();
                checkApplyUi->selectApplyInfo();
            } else if (menu_level_2 == 4) {
                CheckApplyUI* checkApplyUi = new CheckApplyUI();
                checkApplyUi->selectOneApply();
            }
        } else if (menu_level_1 == 5) {
            if (menu_level_2 == 1) {
                StatisticsOfApplyUI* statisticsOfApplyUi = new StatisticsOfApplyUI();
                StatisticsOfApply* statisticsOfApply = new StatisticsOfApply(statisticsOfApplyUi);

                if (currentMember->getMemberType() == 2) {
                    GeneralMember* generalMember = dynamic_cast<GeneralMember*>(currentMember);
                    statisticsOfApplyUi->startInterface(statisticsOfApply->getDateOfApply(generalMember));
                }
                else if(currentMember->getMemberType() == 1){
                    CompanyMember* companyMember = dynamic_cast<CompanyMember*>(currentMember);
                    statisticsOfApplyUi->startInterface(statisticsOfApply->getNumberOfAppliedMember(companyMember));
                }
            }
        } else if (menu_level_1 == 6) {
            if (menu_level_1 == 1) {
                exit();
            }
        }

        // 메뉴 구분 및 해당 연산 수행
        // 1. 회원가입 & 회원탈퇴
        /*switch (menu_level_1)
        {
            case 1:
            {
                switch (menu_level_2)
                {
                    case 1:
                        join();
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
                        logIn();
                        break;
                    case 2:
                        logOut();
                        break;
                }
            }
            case 3:
            {
                switch (menu_level_2) {
                    case 1:
                        search();
                        break;
                }
            }*/
          /*  case 6:
                switch (menu_level_2) {
                    case 1:
                        exit();
                        break;
                }*/
        //}
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
