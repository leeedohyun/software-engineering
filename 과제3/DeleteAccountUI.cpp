#include "TestHeader.h"
#include <iostream>

using namespace std;

void DeleteAccountUI::startInterface()
{
    cout << "1.2. 회원탈퇴" << endl;
}

void DeleteAccountUI::proceedToDelete()
{
    deleteAccount->showDeleteDonePage();
}
