#include "Member.h"

extern vector<Member*> members;
extern Member* currentMember;

/**
 * 함수 이름: Member::Member()
 * 기능: 회원의 아이디와 비밀번호를 주입
 * @param id
 * @param password
 */
Member::Member(std::string id, std::string password)
{
    this->id = id;
    this->password = password;
}

/**
 * 함수 이름: Member::Member()
 * 기능: 회원 정보를 주입
 * @param name
 * @param id
 * @param password
 * @param memberType
 */
Member::Member(string name, string id, string password, int memberType)
{
    this->name = name;
    this->id = id;
    this->password = password;
    this->memberType = memberType;
}

/**
 * 함수 이름: Member::getId()
 * 반환 타입: string
 * 기능: 회원의 아이디를 반환
 * @return id
 */
string Member::getId()
{
    return id;
}

/**
 * 함수 이름: Member::getMemberType()
 * 반환 타입: int
 * 기능: 회원의 타입을 반환
 * @return memberType
 */
int Member::getMemberType()
{
    return memberType;
}

/**
 * 함수 이름: Member::getName()
 * 반환 타입: string
 * 기능: 회원의 이름을 반환
 * @return name
 */
string Member::getName()
{
    return name;
}

/**
 * 함수 이름: Member::createMember()
 * 기능: 생성된 회원을 회원 리스트에 추가
 * @param member
 */
void Member::createMember(Member *member)
{
    members.push_back(member);
}

/**
 * 함수 이름: Member::deleteMember()
 * 기능: 회원 리스트에서 탈퇴한 회원의 정보를 지우는 기능
 */
void Member::deleteMember()
{
    for (int i = 0; i < members.size(); i++)
    {
        if (members[i]->getId() == currentMember->getId())
        {
            members.erase(members.begin() + i);
        }
    }
}

/**
 * 함수 이름: Member::isInfoValid()
 * 반환 타입: bool
 * 기능: 로그인 하는 회원의 아이디와 비밀번호 일치 여부 확인
 * @param inputId
 * @param inputPw
 * @return 아이디와 비밀번호가 일치하면 true, 일치하지 않으면 false
 */
bool Member::isInfoValid(string inputId, string inputPw)
{
    return (inputId == id) && (inputPw == password);
}
