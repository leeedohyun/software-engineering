#include "common.h"
#include "DeleteAccountUI.h"
#include "DeleteAccount.h"


extern fstream in_fp;
extern ofstream out_fp;

DeleteAccountUI::DeleteAccountUI(DeleteAccount* deleteAccount)
{
    deleteAccount = deleteAccount;
}
void DeleteAccountUI::startInterface()
{
   out_fp << "1.2. 회원탈퇴" << endl;
}

void DeleteAccountUI::proceedToDelete()
{
    deleteAccount->showDeleteDonePage();
}

