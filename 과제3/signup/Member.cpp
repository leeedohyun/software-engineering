//
// Created by L-169 on 2023-05-20.
//

#include "Member.h"

Member::Member(string name, string id, string password, int memberType) {
    this->name = name;
    this->id = id;
    this->password = password;
    this->memberType = memberType;
}

string Member::getId() {
    return this->id;
}