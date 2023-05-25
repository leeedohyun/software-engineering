#include "CompanyMember.h"

const int COMPANY_MEMBER_TYPE = 1;

/**
 * 함수 이름: CompanyMember::CompanyMember()
 * 기능: 회사 회원을 생성할 때, 회원 class로부터 아이디와 비밀번호를 주입
 * @param id
 * @param password
 */
CompanyMember::CompanyMember(string id, string password):Member(id, password)
{

}

/**
 * 함수 이름: CompanyMember::CompanyMember
 * 기능: 회사 회원의 정보를 주입
 * @param companyName
 * @param businessNumber
 * @param id
 * @param password
 */
CompanyMember::CompanyMember(string companyName, string businessNumber, string id, string password): Member(companyName, id, password, COMPANY_MEMBER_TYPE)
{
    this->businessNumber = businessNumber;
    cout << &ownedRecruitInfoCollection << endl;
}

/**
 * 함수 이름: CompanyMember::getBusinessNumber()
 * 반환 타입: string
 * 기능: 사업자 번호를 반환하는 역할
 * @return businessNumber
 */
string CompanyMember::getBusinessNumber()
{
    return businessNumber;
}

/**
 * 함수 이름: CompanyMember::getOwnedRecruitInfoCollection()
 * 반환 타입: vector<RecruitInfo*>
 * 기능: 회사 회원이 등록한 채용 정보 리스트를 반환
 * @return 채용 정보 리스트
 */
vector<RecruitInfo*> CompanyMember::getOwnedRecruitInfoCollection()
{
    return ownedRecruitInfoCollection;
}

/**
 * 함수 이름: CompanyMember::addRecruitInfo()
 * 기능: 채용 정보 리스트에 추가
 * @param recruitInfo
 */
void CompanyMember::addRecruitInfo(RecruitInfo* recruitInfo)
{
    ownedRecruitInfoCollection.push_back(recruitInfo);
}