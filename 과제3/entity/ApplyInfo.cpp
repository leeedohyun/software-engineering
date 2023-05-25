#include "ApplyInfo.h"

/**
 * 함수 이름: ApplyInfo::ApplyInfo()
 * 기능: 채용 정보 생성자를 생성하여 정보를 주입하는 역할
 * @param companyName
 * @param busineesNumber
 * @param task
 * @param numberOfPeople
 * @param deadline
 */
ApplyInfo::ApplyInfo(string companyName, string busineesNumber, string task, int numberOfPeople, string deadline)
{
	this->companyName = companyName;
	this->businessNumber = busineesNumber;
	this->task = task;
	this->numberOfPeople = numberOfPeople;
    this->deadline = deadline;
}

/**
 * 함수 이름: ApplyInfo::getDetails()
 * 기능: 채용 정보의 모든 속성들을 반환하는 역할
 * @return 채용 정보의 속성들
 */
string ApplyInfo::getDetails()
{
    return companyName + " " + businessNumber + " " + task + " " + to_string(numberOfPeople) + " " + deadline;
}

/**
 * 함수 이름: ApplyInfo::getCompanyName()
 * 기능: 회사 이름을 반환하는 역할
 * @return companyName
 */
string ApplyInfo::getCompanyName()
{
    return companyName;
}

/**
 * 함수 이름: ApplyInfo::getBusinessNumber()
 * 반환 타입: string
 * 기능: 사업자 번호를 반환하는 역할
 * @return businessNumber
 */
string ApplyInfo::getBusinessNumber()
{
    return businessNumber;
}

/**
 * 함수 이름: ApplyInfo::getTask()
 * 반환 타입: string
 * 기능: 업무를 반환하는 역할
 * @return task
 */
string ApplyInfo::getTask()
{
    return task;
}