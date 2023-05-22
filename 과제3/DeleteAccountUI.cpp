#include "DeleteAccountUI.h"
#include <iostream>

using namespace std;


void DeleteAccountUI::startInterface()
{
    cout << "회원 탈퇴하시겠습니까?" << endl;
}

void DeleteAccountUI::proceedToDelete()
{
    deleteAccount->showDeleteDonePage();
}
