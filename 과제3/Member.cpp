#include "Member.h"

extern vector<Member*> members;

Member::Member(string id, string password, int memberType) {
    this->id = id;
    this->password = password;
    this->memberType = memberType;
}

Member::Member(string name, string id, string password, int memberType) {
    this->name = name;
    this->id = id;
    this->password = password;
    this->memberType = memberType;
}

string Member::getId() {
    return this->id;
}

int Member::getMemberType() {
    return memberType;
}

string Member::getName() {
    return name;
}

void Member::createMember(Member *member) {
    members.push_back(member);
}