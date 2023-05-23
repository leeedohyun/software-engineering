#ifndef __MEMBER___
#define __MEMBER___

#include "common.h"


class Member
{
private:
    string ID;
    string password;
    int memberType;
    string name;
    
public:
    Member(string ID, string password);
    Member(string ID, string password, int memberType);
    Member(string name, string id, string password, int memberType);
    void deleteMember();
    bool isInfoValid(string id, string pw);
    string getID();
    string getPassword();
};

#endif