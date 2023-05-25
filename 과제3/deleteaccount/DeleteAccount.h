#ifndef __DELETEACCOUNT_H__
#define __DELETEACCOUNT_H__

#include <iostream>
#include <string>
#include <vector>

#include "Member.h"
#include "DeleteAccountUI.h"

using namespace std;


/**
* stereotype: Control
* 회원 탈퇴 역할 수행
*/
class DeleteAccount
{
public:
    string showDeleteDonePage();
    void getUI();
};

#endif