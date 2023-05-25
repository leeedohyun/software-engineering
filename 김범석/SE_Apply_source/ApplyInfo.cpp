#include "ApplyInfo.h"

ApplyInfo::ApplyInfo(string companyName, string busineesNumber, string task, int numberOfpeople, string deadline) {
	this->companyName = companyName;
	this->businessNumber = busineesNumber;
	this->task = task;
	this->numberOfPeople = numberOfPeople;
	this->deadline = deadline;
}


// 지원 정보 조회 함수
void ApplyInfo::getDetails() {
	out_fp << companyName << " " << businessNumber << " " << task << " " << numberOfPeople << " " << deadline << endl;
}

// 지원 취소시 지원 정보 삭제 함수
bool ApplyInfo::deleteApplyInfo(string businessNumber) {
	if (this->businessNumber == businessNumber) {
		

		return 1;
		}
}