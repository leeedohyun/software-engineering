#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "Apply.h"
using namespace std;



extern ifstream in_fp;
extern ofstream out_fp;

void Apply::createNewApplyment(RecruitInfo* recruitInfo)
{
	in_fp >> inputedBusinessNumber; // input파일에서 사업자 번호를 받음

	vector<RecruitInfo*> recruitList; // 채용 정보 검색을 통해 나온 리스트를 받을 예정(함수 매개변수로)
	for (int i = 0; i < recruitList.size(); i++) {
		if (recruitList[i]->getDeadLineStatus() && recruitList[i]->getBusinessNumber() == inputedBusinessNumber) { // 신청마감일이 지나지 않고, 사업자 번호가 입력받은 값과 같은 경우
			ApplyInfo* applyInfo = new ApplyInfo(recruitList[i]->getCompanyName() 
				, recruitList[i]->getBusinessNumber(), recruitList[i]->getTask()
				, recruitList[i]->getNumberOfPeople(), recruitList[i]->getDeadLine());
			applyCollection->addNewApplyInfo(applyInfo);// 새로운 지원 정보 추가	
			
			// 지원 정보를 매개변수로 넘겨서 startInterface() 호출
			applyUI->startInterface(recruitList[i]->getCompanyName(), recruitList[i]->getBusinessNumber()
									, recruitList[i]->getTask());
		}
	}
}
