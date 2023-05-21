#include "../common.h"
#include "Member.h"

#ifndef UNTITLED_MEMBERLIST_H
#define UNTITLED_MEMBERLIST_H


class MemberList {
private:
    vector<Member*> members;

public:
    void addNewMember(Member* member);
};


#endif //UNTITLED_MEMBERLIST_H
