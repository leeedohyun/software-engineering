#include "common.h"
#include "deleteAccountUI.h"


extern fstream in_fp;
extern ofstream out_fp;

void DeleteAccountUI::startInterface()
{
   out_fp << "1.2. 회원탈퇴" << endl;
    proceedToDelete();
}

void DeleteAccountUI::proceedToDelete()
{
    deleteAccount->showDeleteDonePage();
}

