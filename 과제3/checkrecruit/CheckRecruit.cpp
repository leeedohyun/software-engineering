#include "CheckRecruit.h"
#include "RecruitInfo.h"

extern ofstream out_fp;

/**
 * 함수 이름: CheckRecruit::CheckRecruit()
 * 기능: 채용 정보를 조회하는 회사 회원을 주입
 * @param refCompanyMember
 */
CheckRecruit::CheckRecruit(CompanyMember* refCompanyMember)
{
    pCompanyMember = refCompanyMember;
}

/**
 * 함수 이름: CheckRecruit::showRecruits()
 * 반환 타입: vector<RecruitInfo*>
 * 기능: 조회할 채용 정보를 boundary로 반환
 * @return 회사 회원이 등록한 채용 정보
 */
vector<RecruitInfo*> CheckRecruit::showRecruits()
{
    return pCompanyMember->getOwnedRecruitInfoCollection();
}