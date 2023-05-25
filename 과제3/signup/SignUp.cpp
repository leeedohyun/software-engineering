#include "SignUp.h"
#include "SignUpUI.h"
#include "GeneralMember.h"
#include "Member.h"
#include "CompanyMember.h"

/**
 * 함수 이름: SignUp::createGeneralMember()
 * 기능: 일반 회원 회원가입
 * @param name
 * @param socialSecurityNumber
 * @param id
 * @param password
 */
void SignUp::createGeneralMember(string name, string socialSecurityNumber, string id, string password)
{
    GeneralMember* createdGeneralMember = new GeneralMember(name, socialSecurityNumber, id, password);

    createdGeneralMember->createMember(createdGeneralMember);
}

/**
 * 함수 이름: SignUp::start()
 * 기능: boundary의 startInterface 호출
 */
void SignUp::start()
{
    SignUpUI::startInterface();
}

/**
 * 함수 이름: SignUp::createCompanyMember()
 * 기능: 회사 회원 회원가입
 * @param companyName
 * @param businessNumber
 * @param id
 * @param password
 */
void SignUp::createCompanyMember(string companyName, string businessNumber, string id,
                                 string password) {
    CompanyMember* createdCompanyMember = new CompanyMember(companyName, businessNumber, id, password);

    createdCompanyMember->createMember(createdCompanyMember);
}