#include "common.h"
#include "DeleteAccount.h"

extern Member* currentMember;

/**
 * 함수 이름: DeleteAccount::showDeleteDonePage()
 * 반환 타입: string
 * @return 탈퇴하는 회원의 아이디
 */
string DeleteAccount::showDeleteDonePage()
{
    currentMember->deleteMember();
    return currentMember->getId();
}

/**
 * 함수 이름: DeleteAccount::getUI()
 * 기능: boundary의 startInterface 실행
 */
void DeleteAccount::getUI()
{
    DeleteAccountUI* deleteAccountUi = new DeleteAccountUI();
    deleteAccountUi->startInterface();
}