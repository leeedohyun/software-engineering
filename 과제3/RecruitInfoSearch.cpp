#include "RecruitInfoSearch.h"
#include "RecruitInfo.h"
#include "Member.h"
#include "CompanyMember.h"

extern vector<Member*> members;

/**
 * 함수 이름: RecruitInfoSearch::showRecruitInfo()
 * 기능: 검색한 회사에 대한 채용정보를 반환 시킴
 * @param companyName
 * @return searchedList
 */
vector<RecruitInfo*> RecruitInfoSearch::showRecruitInfo(string companyName) {
    vector<RecruitInfo*> searchedList;
    for (int i = 0; i < members.size(); ++i) {
        if (members[i]->getMemberType() == 1 && members[i]->getName() == companyName) {
            CompanyMember *searchedCompany = dynamic_cast<CompanyMember *>(members[i]);
            for (int j = 0; j < searchedCompany->getOwnedRecruitInfoCollection().size(); j++) {
                searchedList.push_back(searchedCompany->getOwnedRecruitInfoCollection()[i]);
            }
        }
    }
    return searchedList;
}

/**
 * 함수 이름: RecruitInfoSearch::start()
 * 기능: startInterface() 호출
 */
void RecruitInfoSearch::start() {
    recruitInfoSearchUi->startInterface();
}