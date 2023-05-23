#include "Member.h"

extern vector<Member*> members;
extern Member* currentMember;

Member::Member(std::string id, std::string password) {
    this->id = id;
    this->password = password;
}

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

string Member::getPassword() {
    return password;
}

void Member::createMember(Member *member) {
    members.push_back(member);
}

void Member::deleteMember()
{
    for (int i = 0; i < members.size(); i++)
    {
        if (members[i]->getId() == currentMember->getId())
        {
            members.erase(members.begin() + i);
        }
    }
}

bool Member::isInfoValid(string inputId, string inputPw)
{
    return (inputId == id) && (inputPw == password);
}
