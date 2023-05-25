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
	void getDetails(); // ��� ���� ��������Ʈ�� ��� �Լ�
	bool deleteApplyInfo(string businessNumber); // ���� ��ҿ� ���� ���� ���� ���� �Լ� 
	string getTaskOfApply(); // ��� ���� ��������Ʈ���� ������ ��ȯ
	ApplyInfo(string companyName, string busineesNumber, string task, int numberOfpeople, string deadline);

};
