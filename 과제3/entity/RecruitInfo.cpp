#pragma once
#include "RecruitInfo.h"

/**
 * 함수 이름: RecruitInfo::RecruitInfo()
 * 기능: 채용 정보를 외부에서 주입
 * @param task
 * @param numberOfPeople
 * @param deadline
 * @param companyName
 * @param businessNumber
 */
RecruitInfo::RecruitInfo(string task, int numberOfPeople, string deadline, string companyName, string businessNumber)
{
    this->task = task;
    this->numberOfPeople = numberOfPeople;
    this->deadline = deadline;
    this->companyName = companyName;
    this->businessNumber = businessNumber;
}

/**
 * 함수 이름: RecruitInfo::getCompanyName()
 * 반환 타입: string
 * 기능: 채용을 등록한 회사 이름을 반환
 * @return
 */
string RecruitInfo::getCompanyName()
{
    return companyName;
}

/**
 * 함수 이름: RecruitInfo::getBusinessNumber()
 * 반환 타입: string
 * 기능: 채용 정보의 사업자 번호를 반환
 * @return 채용 정보가 가지고 있는 사업자 번호
 */
string RecruitInfo::getBusinessNumber()
{
    return businessNumber;
}

/**
 * 함수 이름: RecruitInfo::getTask()
 * 반환 타입: string
 * 기능: 채용 정보의 업무 반환
 * @return 채용 정보가 가지고 있는 업무 반환
 */
string RecruitInfo::getTask()
{
    return task;
}

/**
 * 함수 이름: RecruitInfo::getDeadline()
 * 반환 타입: string
 * 기능: 채용 정보의 마감 기한 반환
 * @return 채용 정보가 가지고 있는 마감 기한
 */
string RecruitInfo::getDeadline()
{
    return deadline;
}

/**
 * 함수 이름: RecruitInfo::getNumberOfPeople()
 * 반환 타입: int
 * 기능: 채용 정보의 인원 수 반환
 * @return 채용 정보가 가지고 있는 인원 수
 */
int RecruitInfo::getNumberOfPeople()
{
    return numberOfPeople;
}

/**
 * 함수 이름: RecruitInfo::getRecruitName()
 * 반환 타입: string
 * 기능: 채용 정보의 세부 정보를 반환
 * @return 업무, 인원수와 마감 기한
 */
string RecruitInfo::getRecruitName()
{
    return task + " " + to_string(numberOfPeople) + " " + deadline;
}
