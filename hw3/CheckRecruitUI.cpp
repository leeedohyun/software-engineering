#include "CheckRecruitUI.h"

extern ofstream out_fp;

CheckRecruitUI::CheckRecruitUI(CheckRecruit* refCheckRecruit)
{
    pCheckRecruit = refCheckRecruit;
}

void CheckRecruitUI::requestCheckRecruit()
{
    out_fp << "3.2. 채용 정보 조회\n";
    pCheckRecruit->showRecruits();
}

