#include "common.h"
#include "DeleteAccount.h"

using namespace std;

void DeleteAccount::showDeleteDonePage()
{
    extern Member* currentMember;

    
    currentMember->deleteMember();


    cout << "회원 탈퇴가 완료되었습니다." << endl;
}

DeleteAccountUI* DeleteAccount::getUI()
{
    return deleteAccountUI;}