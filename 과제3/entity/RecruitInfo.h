#include "common.h"

#ifndef __RECRUITINFO_H__
#define __RECRUITINFO_H__


/**
* stereotype: Entity
* 채용 정보를 표현
*/
class RecruitInfo
{
private:
    int numberOfPeople;
    string task;
    string deadline;
    string companyName;
    string businessNumber;

public:
    RecruitInfo(string task, int numberOfPeople, string deadline, string companyName, string businessNumber);
    string getRecruitName();
    int getNumberOfPeople();
    string getTask();
    string getDeadline();
    string getCompanyName();
    string getBusinessNumber();
};


#endif
