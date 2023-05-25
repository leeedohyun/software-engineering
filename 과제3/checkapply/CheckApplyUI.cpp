#include "CheckApplyUI.h"

extern ifstream in_fp;
extern ofstream out_fp;

/**
 * 함수 이름: CheckApplyUI::selectApplyInfo()
 * 기능: 지원 정보를 출력
 */
void CheckApplyUI::selectApplyInfo()
{
    cout << "4.3. 지원 정보 조회" << endl;
    out_fp << "4.3. 지원 정보 조회" << endl;
	vector<ApplyInfo*> appliedList = pCheckApply->showApplyInfo();

    for (int i = 0; i < appliedList.size(); ++i) {
        cout << appliedList[i]->getDetails() << endl;
        out_fp << "> " << appliedList[i]->getDetails() << endl << endl;
    }
}

/**
 * 함수 이름: CheckApplyUI::selectOneApply()
 * 기능: 사업자 번호를 입력받고, 취소된 지원 정보를 출력
 */
void CheckApplyUI::selectOneApply()
{
    cout << "4.4. 지원 취소" << endl;
    out_fp << "4.3. 지원 취소" << endl;

	string businessNumber;

	in_fp >> businessNumber;

	ApplyInfo* canceledApply = pCheckApply->cancelApply(businessNumber);

    cout << "> " << canceledApply->getCompanyName() << " " << canceledApply->getBusinessNumber() << " " << canceledApply->getTask() << endl << endl;
    out_fp << "> " << canceledApply->getCompanyName() << " " << canceledApply->getBusinessNumber() << " " << canceledApply->getTask() << endl << endl;
}