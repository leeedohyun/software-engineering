#pragma once
#include <string>
#include <iostream>
#include <string>
#include <fstream>

#ifndef __APPYLYINFOINFOSEARCH_H__
#define __APPLYINFOINFOSEARCH_H__

using namespace std;

/**
* stereotype: Entity
* 지원 정보 도메인
*/
class ApplyInfo
{
private:
	string companyName;
	string businessNumber;
	string task;
	string deadline;
	int numberOfPeople;

public:
    ApplyInfo(string companyName, string businessNumber, string task, int numberOfPeople, string deadline);
	string getDetails();
	string getTask();
    string getCompanyName();
    string getBusinessNumber();
};

#endif