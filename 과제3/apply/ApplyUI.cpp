#include "ApplyUI.h"
#include "ApplyInfo.h"
#include "Apply.h"

extern ifstream in_fp;
extern ofstream out_fp;

/**
 * 함수 이름: ApplyUI::startInterface()
 * 기능: 채용 지원 문구를 출력
 */
void ApplyUI::startInterface()
{
	cout << "4.2. 채용 지원" << endl;
    out_fp << "4.2. 채용 지원" << endl;

}

/**
 * 함수 이름: ApplyUI::applyNewRecruitment()
 * 기능: 사업자 번호를 입력받아 control로 넘겨 주고, 지원 정보를 출력
 */
void ApplyUI::applyNewRecruitment()
{
    string inputedBusinessNumber;

    in_fp >> inputedBusinessNumber;

    Apply* apply = new Apply();
    ApplyInfo* newApply = apply->createNewApplyment(inputedBusinessNumber);

    cout << "> " << newApply->getCompanyName() << " " << newApply->getBusinessNumber() << " " << newApply->getTask() << endl << endl;
    out_fp << "> " << newApply->getCompanyName() << " " << newApply->getBusinessNumber() << " " << newApply->getTask() << endl << endl;
}