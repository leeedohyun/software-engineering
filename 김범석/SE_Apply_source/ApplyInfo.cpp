#include "ApplyInfo.h"

ApplyInfo::ApplyInfo(string companyName, string busineesNumber, string task, int numberOfpeople, string deadline) {
	this->companyName = companyName;
	this->businessNumber = busineesNumber;
	this->task = task;
	this->numberOfPeople = numberOfPeople;
	this->deadline = deadline;
}


// ���� ���� ��ȸ �Լ�
void ApplyInfo::getDetails() {
	out_fp << companyName << " " << businessNumber << " " << task << " " << numberOfPeople << " " << deadline << endl;
}

// ���� ��ҽ� ���� ���� ���� �Լ�
bool ApplyInfo::deleteApplyInfo(string businessNumber) {
	if (this->businessNumber == businessNumber) {
		

		return 1;
		}
}