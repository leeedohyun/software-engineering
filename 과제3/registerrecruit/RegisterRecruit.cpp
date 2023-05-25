#include "RegisterRecruit.h"
#include "RegisterRecruitUI.h"

/**
 * 함수 이름: RegisterRecruit::RegisterRecruit()
 * 기능: 채용을 등록할 회사 회원의 정보 주입
 * @param refCompanyMember
 */
RegisterRecruit::RegisterRecruit(CompanyMember* refCompanyMember)
{
    pCompanyMember = refCompanyMember;
}

/**
 * 함수 이름: RegisterRecruit::registerNewRecruit()
 * 기능: 채용을 생성하고 회사 회원의 채용 리스트에 추가
 * @param task
 * @param numberOfPeople
 * @param deadline
 */
void RegisterRecruit::registerNewRecruit(string task, int numberOfPeople, string deadline)
{
    RecruitInfo* newRecruitInfo = new RecruitInfo(task, numberOfPeople, deadline , pCompanyMember->getName(), pCompanyMember->getBusinessNumber());
    pCompanyMember->addRecruitInfo(newRecruitInfo);
}

/**
 * 함수 이름: RegisterRecruit::start()
 * 기능: boundary의 startInterface 호출
 */
void  RegisterRecruit::start()
{
    RegisterRecruitUI* registerRecruitUi = new RegisterRecruitUI();
    registerRecruitUi->startInterface();
}