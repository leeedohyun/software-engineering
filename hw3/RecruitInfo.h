#include "common.h"

#ifndef UNTITLED_RECRUITINFO_H
#define UNTITLED_RECRUITINFO_H


class RecruitInfo {
private:
    int numberOfPeople;
    string task;
    string deadline;
    string companyName;
    string businessNumber;
    bool deadlineStatus;

public:
    RecruitInfo(string task, int numberOfPeople, string deadline, string companyName, string businessNumber);
    string getRecruitName();
    int getNumberOfPeople();
    string getTask();
    string getDeadline();
    string getCompanyName();
    string getBusinessNumber();
};


#endif //UNTITLED_RECRUITINFO_H
