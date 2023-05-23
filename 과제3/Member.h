#include "common.h"

#ifndef UNTITLED_MEMBER_H
#define UNTITLED_MEMBER_H


class Member {
private:
    string id;
    string password;
    string name;
    int memberType;

public:
    Member(string id, string password);
    Member(string id, string password, int memberType);
    Member(string name, string id, string password, int memberType);
    void createMember(Member* member);
    bool isInfoValid(string id, string pw);
    string getId();
    void deleteMember();
    string getPassword();
    int getMemberType();
    string getName();
};


#endif //UNTITLED_MEMBER_H
