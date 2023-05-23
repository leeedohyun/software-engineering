#ifndef __DELETEACCOUNT___
#define __DELETEACCOUNT___

#include "common.h"
#include "Member.h"
#include "DeleteAccountUI.h"

class DeleteAccount
{
private:
    Member* member;
    DeleteAccountUI* deleteAccountUI;
public:
    DeleteAccount();
    void showDeleteDonePage(); 
    DeleteAccountUI* getUI();

};

#endif