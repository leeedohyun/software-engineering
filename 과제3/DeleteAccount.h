#pragma once
#include "common.h"
#include "Member.h"

class DeleteAccountUI;
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