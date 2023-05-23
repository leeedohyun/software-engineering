#include "common.h"
#include "Member.h"

using namespace std;
extern vector<Member*> memberList;

void Member::deleteMember()
{
    
    for (int i = 0; i < memberList.size(); i++)
    {
        if (memberList[i]->getID() == ID)
        {
            memberList.erase(memberList.begin() + i);
            break;
        }
    }
}

bool Member::isInfoValid(string id, string pw)
{
     for (int i = 0; i < memberList.size(); i++)
    {
        if (memberList[i]->getID() == id && memberList[i]->getPassword() == pw)
        {
            return true;
        }
    }
    return false;
}

string Member::getID()
{
    return ID;
}

string Member::getPassword()
{
    return password;
}