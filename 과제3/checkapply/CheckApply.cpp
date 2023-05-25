#include "CheckApply.h"
#include "Member.h"
#include "GeneralMember.h"

extern Member* currentMember;
extern vector<Member*> members;

/**
 * 함수 이름: CheckApply::showApplyInfo()
 * 반환 타입: vector<ApplyInfo*>
 * 기능: 일반 회원이 지원한 모든 지원 정보를 조회
 * @return appliedList
 */
vector<ApplyInfo*> CheckApply::showApplyInfo()
{
    vector<ApplyInfo*> appliedList;
    GeneralMember* showedGeneralMember = dynamic_cast<GeneralMember*>(currentMember);
    for (int i = 0; i < showedGeneralMember->getApplyList().size(); ++i) {
        appliedList.push_back(showedGeneralMember->getApplyList()[i]);
    }
    return appliedList;
}

/**
 * 함수 이름: CheckApply::cancelApply()
 * 반환 타입: ApplyInfo*
 * 기능: 지원 취소
 * @param businessNumber
 * @return cancelApply
 */
ApplyInfo* CheckApply::cancelApply(string businessNumber)
{
    ApplyInfo* canceledApply = nullptr;
    GeneralMember *showedGeneralMember = dynamic_cast<GeneralMember *>(currentMember);
    for (int i = 0; i < showedGeneralMember->getApplyList().size(); ++i) {
        if (showedGeneralMember->getApplyList()[i]->getBusinessNumber() == businessNumber) {
            canceledApply = showedGeneralMember->getApplyList()[i];
            showedGeneralMember->cancelApply(i);
        }
    }
    return canceledApply;
}
