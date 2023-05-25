#include "RegisterRecruitUI.h"

extern ifstream in_fp;
extern ofstream out_fp;

/**
 * 함수 이름: RegisterRecruitUI::RegisterRecruitUI()
 * 기능: 기본 생성자 생성
 */
RegisterRecruitUI::RegisterRecruitUI()
{
}

/**
 * 함수 이름: RegisterRecruitUI::RegisterRecruitUI()
 * @param refRegisterRecruit
 */
RegisterRecruitUI::RegisterRecruitUI(RegisterRecruit* refRegisterRecruit)
{
    pRegisterRecruit = refRegisterRecruit;
}

/**
 * 함수 이름: RegisterRecruitUI::startInterface()
 * 기능: 채용 정보 등록 문구 출력
 */
void RegisterRecruitUI::startInterface()
{
    out_fp << "3.1. 채용 정보 등록" << endl;
}

/**
 * 함수 이름: RegisterRecruitUI::createNewRecruit()
 * 기능: 등록할 채용 정보를 입력받고, 등록된 채용 정보를 출력
 */
void RegisterRecruitUI::createNewRecruit()
{
    string task;
    int numberOfPeople;
    string deadline;

    in_fp >> task >> numberOfPeople >> deadline;

    pRegisterRecruit->registerNewRecruit(task, numberOfPeople, deadline);

    cout << task << " " << numberOfPeople << " " << deadline << endl << endl;
    out_fp << "> " << task << " " << numberOfPeople << " " << deadline << endl << endl;
}