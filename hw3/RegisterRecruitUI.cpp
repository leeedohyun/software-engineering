#include "RegisterRecruitUI.h"

extern ifstream in_fp;
extern ofstream out_fp;

RegisterRecruitUI::RegisterRecruitUI() {
}

RegisterRecruitUI::RegisterRecruitUI(RegisterRecruit* refRegisterRecruit)
{
    pRegisterRecruit = refRegisterRecruit;
}

void RegisterRecruitUI::startInterface()
{
    out_fp << "3.1. 채용 정보 등록" << endl;
}

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