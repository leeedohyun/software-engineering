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
	in_fp >> inputedBusinessNumber; // input���Ͽ��� ����� ��ȣ�� ����

	vector<RecruitInfo*> recruitList; // ä�� ���� �˻��� ���� ���� ����Ʈ�� ���� ����(�Լ� �Ű�������)
	for (int i = 0; i < recruitList.size(); i++) {
		if (recruitList[i]->getDeadLineStatus() && recruitList[i]->getBusinessNumber() == inputedBusinessNumber) { // ��û�������� ������ �ʰ�, ����� ��ȣ�� �Է¹��� ���� ���� ���
			ApplyInfo* applyInfo = new ApplyInfo(recruitList[i]->getCompanyName() 
				, recruitList[i]->getBusinessNumber(), recruitList[i]->getTask()
				, recruitList[i]->getNumberOfPeople(), recruitList[i]->getDeadLine());
			applyCollection->addNewApplyInfo(applyInfo);// ���ο� ���� ���� �߰�	
			
			// ���� ������ �Ű������� �Ѱܼ� startInterface() ȣ��
			applyUI->startInterface(recruitList[i]->getCompanyName(), recruitList[i]->getBusinessNumber()
									, recruitList[i]->getTask());
		}
	}
}
