#include "TestHeader.h"
#include <iostream>
#include <string>
using namespace std;

bool LogIn::makeLogInInfo(string id, string pw)
{
    member = new Member(id, pw);

    switch (member->isInfoValid(id, pw))
    {
    case true:
        break;
    
    case false:
        break;
    }

    return member->isInfoValid(id, pw);
}