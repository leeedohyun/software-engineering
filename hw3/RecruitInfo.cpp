#pragma once
#include "RecruitInfo.h"

RecruitInfo::RecruitInfo(string task, int numberOfPeople, string deadline, string companyName, string businessNumber)
{
    this->task = task;
    this->numberOfPeople = numberOfPeople;
    this->deadline = deadline;
    this->companyName = companyName;
    this->businessNumber = businessNumber;
}

string RecruitInfo::getCompanyName() {
    return companyName;
}

string RecruitInfo::getBusinessNumber() {
    return businessNumber;
}

string RecruitInfo::getTask() {
    return task;
}

string RecruitInfo::getDeadline() {
    return deadline;
}

int RecruitInfo::getNumberOfPeople() {
    return numberOfPeople;
}

string RecruitInfo::getRecruitName()
{
    return task + " " + to_string(numberOfPeople) + " " + deadline;
}
