#include "CheckRecruit.h"
#include "RecruitInfo.h"

extern ofstream out_fp;

CheckRecruit::CheckRecruit(CompanyMember* refCompanyMember)
{
    pCompanyMember = refCompanyMember;
}

void CheckRecruit::showRecruits()
{
    vector<RecruitInfo*> recruits = pCompanyMember->getOwnedRecruitInfoCollection();
    for (int i = 0; i < recruits.size(); i++) {
        cout << "> " << recruits[i]->getRecruitName() << endl;
        out_fp << "> " << recruits[i]->getRecruitName() << endl;
    }
}