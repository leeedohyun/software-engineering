#include "Member.h"
#include "../common.h"

#ifndef UNTITLED_GENERALMEMBER_H
#define UNTITLED_GENERALMEMBER_H


class GeneralMember : public Member {
private:
    string socialSecurityNumber;

public:
    GeneralMember(string name, string socialSecurityNumber, string id, string password);
};


#endif //UNTITLED_GENERALMEMBER_H
