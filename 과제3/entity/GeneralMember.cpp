#include "GeneralMember.h"

const int GENERAL_MEMBER_TYPE = 2;

/**
 * 함수 이름: GeneralMember::GeneralMember()
 * 기능: 일반 회원의 정보를 주입
 * @param name
 * @param socialSecurityNumber
 * @param id
 * @param password
 */
GeneralMember::GeneralMember(string name, string socialSecurityNumber, string id, string password) : Member(name, id, password, GENERAL_MEMBER_TYPE)
{
    this->socialSecurityNumber = socialSecurityNumber;
}

/**
 * 함수 이름: GeneralMember::getApplyList()
 * 반환 타입: vector<ApplyInfo*>
 * 기능: 일반 회원의 지원 리스트를 반환
 * @return 일반 회원의 지원 리스트
 */
vector<ApplyInfo*> GeneralMember::getApplyList()
{
    return applyList;
}

/**
 * 함수 이름: GeneralMember::addNewApplyInfo()
 * 기능: 지원 리스트에 지원 정보를 추가
 * @param pInfo
 */
void GeneralMember::addNewApplyInfo(ApplyInfo *pInfo)
{
    applyList.push_back(pInfo);
}

/**
 * 함수 이름: GeneralMember::cancelApply()
 * 기능: 지원을 취소하여 지원 리스트에서 삭제
 * @param index
 */
void GeneralMember::cancelApply(int index)
{
    applyList.erase(applyList.begin() + index);
}