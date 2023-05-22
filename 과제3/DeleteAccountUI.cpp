#include "TestHeader.h"
#include <iostream>

using namespace std;
extern fstream in_fp;
extern ofstream out_fp;

void DeleteAccountUI::startInterface()
{
    cout << "1.2. 회원탈퇴" << endl;
    proceedToDelete();
}

void DeleteAccountUI::proceedToDelete()
{
    deleteAccount->showDeleteDonePage();
}
