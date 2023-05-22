#include "TestHeader.h"
#include <iostream>

using namespace std;

void DeleteAccount::showDeleteDonePage()
{
    extern Member* currentMember;
    extern vector<Member*> memberList;
    
    for (int i = 0; i < memberList.size(); i++)
    {
        if (memberList[i]->getID() == currentMember->getID())
        {
            memberList.erase(memberList.begin() + i);
            break;
        }
    }


    cout << "회원 탈퇴가 완료되었습니다." << endl;
}