#include "GeneralMember.h"

const int GENERAL_MEMBER_TYPE = 2;

GeneralMember::GeneralMember(string name, string socialSecurityNumber,
                             string id, string password) : Member(name, id, password, GENERAL_MEMBER_TYPE) {
    this->socialSecurityNumber = socialSecurityNumber;
}