#include "RecruitInfoSearchUI.h"
#include "RecruitInfoSearch.h"
#include "RecruitInfo.h"

extern ifstream in_fp;
extern ofstream out_fp;

/**
 * 함수 이름: RecruitInfoSearchUI::startInterface()
 * 기능: 검색 결과에 대한 문구 출력
 */
void RecruitInfoSearchUI::startInterface() {
    cout << "4.1. 채용 정보 검색" << endl;
    out_fp << "4.1. 채용 정보 검색" << endl;
}

/**
 * 함수 이름: RecruitInfoSearchUI::inputCompanyName()
 * 기능: 일반 회원이 검색할 회사 회원을 입력하는 기능
 */
void RecruitInfoSearchUI::inputCompanyName() {
    string companyName;
    string businessNumber;

    in_fp >> companyName;

    RecruitInfoSearch* recruitInfoSearch = new RecruitInfoSearch();
    vector<RecruitInfo*> ownedRecruitInfoCollection = recruitInfoSearch->showRecruitInfo(companyName);

    for (int i = 0; i < ownedRecruitInfoCollection.size(); i++) {
        cout << ownedRecruitInfoCollection[i]->getCompanyName() << ownedRecruitInfoCollection[i]->getBusinessNumber()
                << ownedRecruitInfoCollection[i]-> getTask() << ownedRecruitInfoCollection[i]->getNumberOfPeople() << ownedRecruitInfoCollection[i]->getDeadline() << endl << endl;
        out_fp << companyName << " " << ownedRecruitInfoCollection[i]->getBusinessNumber() << " "
               << ownedRecruitInfoCollection[i]-> getTask()  << " " << ownedRecruitInfoCollection[i]->getNumberOfPeople()
               << " " << ownedRecruitInfoCollection[i]->getDeadline() << endl << endl;
    }
}
