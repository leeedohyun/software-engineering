#pragma once
#include <string>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>


extern ifstream in_fp;
extern ofstream out_fp;

using namespace std;

class ApplyInfo {
private:
	string companyName, businessNumber, task, deadline;
	int numberOfPeople;

public:
	void getDetails(); // 모든 지원 정보리스트를 출력 함수
	bool deleteApplyInfo(string businessNumber); // 지원 취소에 의한 지원 정보 삭제 함수 
	string getTaskOfApply(); // 모든 지원 정보리스트에서 업무를 반환
	ApplyInfo(string companyName, string busineesNumber, string task, int numberOfpeople, string deadline);

};
