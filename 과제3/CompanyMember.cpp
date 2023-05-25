#include "CompanyMember.h"

const int COMPANY_MEMBER_TYPE = 2;

CompanyMember::CompanyMember(string companyName, string businessNumber, string id,
                             string password): Member(companyName, id, password, COMPANY_MEMBER_TYPE) {
    this->businessNumber = businessNumber;
}

string CompanyMember::getBusinessNumber() {
    return businessNumber;
}