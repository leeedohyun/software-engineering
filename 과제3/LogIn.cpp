#include "TestHeader.h"
#include <iostream>
#include <string>
using namespace std;

bool LogIn::makeLogInInfo(string id, string pw)
{
    extern Member* currentMember;
    member = new Member(id, pw);

    if (member->isInfoValid(id, pw))
    {
        currentMember = member;
        return true;
    }
    else
    {
        return false;
    }

}