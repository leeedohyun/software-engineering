#include "common.h"
#include "DeleteAccountUI.h"
#include "DeleteAccount.h"

extern fstream in_fp;
extern ofstream out_fp;

/**
 * 함수 이름: DeleteAccountUI::startInterface()
 * 기능: 회원 탈퇴 문구 출력
 */
void DeleteAccountUI::startInterface()
{
    out_fp << "1.2. 회원탈퇴" << endl;
}

/**
 * 함수 이름: DeleteAccountUI::proceedToDelete()
 * 기능: 탈퇴하는 회원의 아이디 출력
 */
void DeleteAccountUI::proceedToDelete()
{
    DeleteAccount* deleteAccount = new DeleteAccount();

    out_fp << "> " << deleteAccount->showDeleteDonePage();
    cout << "> " << deleteAccount->showDeleteDonePage();
}

