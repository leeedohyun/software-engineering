#include "CompanyMember.h"

const int COMPANY_MEMBER_TYPE = 1;

CompanyMember::CompanyMember(string id, string password):Member(id, password)
{

}

CompanyMember::CompanyMember(string companyName, string businessNumber, string id,
                             string password): Member(companyName, id, password, COMPANY_MEMBER_TYPE) {
    this->businessNumber = businessNumber;
    cout << &ownedRecruitInfoCollection << endl;
}

string CompanyMember::getBusinessNumber() {
    return businessNumber;
}

/*RecruitInfoCollection CompanyMember::getOwnedRecruitInfoCollection() {
    return ownedRecruitInfoCollection;
}*/

vector<RecruitInfo*> CompanyMember::getOwnedRecruitInfoCollection() {
    return ownedRecruitInfoCollection;
}

void CompanyMember::addRecruitInfo(RecruitInfo* recruitInfo)
{
    ownedRecruitInfoCollection.push_back(recruitInfo);
}