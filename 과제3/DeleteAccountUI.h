#include "common.h"
#include "DeleteAccount.h"
#ifndef __DELETEACCOUNTUI___
#define __DELETEACCOUNTUI___

class DeleteAccountUI
{
private:
    DeleteAccount* deleteAccount;
public:
    DeleteAccountUI();
    void startInterface();
    void proceedToDelete();
};

#endif