#include "common.h"

#ifndef __MEMBER_H__
#define __MEMBER_H__


/**
* stereotype: Entity
* 회원 정보를 표현
*/
class Member
{
private:
    string id;
    string password;
    string name;
    int memberType;

public:
    Member(string id, string password);
    Member(string name, string id, string password, int memberType);
    virtual void createMember(Member* member);
    bool isInfoValid(string id, string pw);
    string getId();
    void deleteMember();
    int getMemberType();
    string getName();
};


#endif
