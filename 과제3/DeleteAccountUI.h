#pragma once
#include "common.h"


class DeleteAccount;
class DeleteAccountUI
{
private:
    DeleteAccount* deleteAccount;
public:
    DeleteAccountUI();
    void startInterface();
    void proceedToDelete();
};
