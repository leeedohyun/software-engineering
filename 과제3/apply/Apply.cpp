#include <string>
#include <fstream>
#include <vector>

#include "Apply.h"
#include "ApplyInfo.h"
#include "Member.h"
#include "GeneralMember.h"
#include "RecruitInfo.h"
#include "ApplyUI.h"
#include "CompanyMember.h"

extern Member* currentMember;
extern vector<Member*> members;

extern ifstream in_fp;
extern ofstream out_fp;

/**
 * 함수 이름: Apply::createNewApplyment()
 * 기능: 지원을 생성하여 지원 리스트에 추가한 후 반환
 * @param inputedBusinessNumber
 * @return applyInfo
 */
ApplyInfo* Apply::createNewApplyment(string inputedBusinessNumber)
{

    for (int i = 0; i < members.size(); i++) {
        if (members[i]->getMemberType() == 1) {
            CompanyMember* companyMember = dynamic_cast<CompanyMember*>(members[i]);
            if(companyMember->getBusinessNumber() == inputedBusinessNumber) {
                vector<RecruitInfo*> recruitList = companyMember->getOwnedRecruitInfoCollection();
                ApplyInfo* applyInfo = new ApplyInfo(recruitList[0]->getCompanyName(), recruitList[0]->getBusinessNumber(), recruitList[0]->getTask(), recruitList[0]->getNumberOfPeople(), recruitList[0]->getDeadline());
                GeneralMember* appliedGeneralMember = dynamic_cast<GeneralMember*>(currentMember);
                appliedGeneralMember->addNewApplyInfo(applyInfo);// ���ο� ���� ���� �߰�

                return applyInfo;
            }
        }
    }
    return nullptr;
}

/**
 * 함수 이름: Apply::start()
 * 기능: startInterface() 호출하는 역할
 */
void Apply::start()
{
    ApplyUI* applyUi = new ApplyUI();
    applyUi->startInterface();
}
