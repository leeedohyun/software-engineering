#include "CheckRecruitUI.h"

extern ofstream out_fp;

/**
 * 함수 이름: CheckRecruitUI::CheckRecruitUI()
 * @param refCheckRecruit
 */
CheckRecruitUI::CheckRecruitUI(CheckRecruit* refCheckRecruit)
{
    pCheckRecruit = refCheckRecruit;
}

/**
 * 함수 이름: CheckRecruitUI::requestCheckRecruit()
 * 기능: 회사 회원이 등록한 채용 정보 출력
 */
void CheckRecruitUI::requestCheckRecruit()
{
    out_fp << "3.2. 채용 정보 조회\n";

    vector<RecruitInfo*> recruits = pCheckRecruit->showRecruits();

    for (int i = 0; i < recruits.size(); i++) {
        cout << "> " << recruits[i]->getRecruitName() << endl;
        out_fp << "> " << recruits[i]->getRecruitName() << endl;
    }
}

