#include "LogIn.h"
#include "LogInUI.h"
#include "GeneralMember.h"

extern vector<Member*> members;
extern Member* currentMember;

/**
 * 함수 이름: LogIn::makeLogInInfo()
 * 반환 타입: bool
 * 기능: 로그인하는 회원이 회원 리스트에 있는지 검증
 * @param id
 * @param pw
 * @return
 */
bool LogIn::makeLogInInfo(string id, string pw)
{
    for (int i = 0; i < members.size(); i++)
    {
        if (members[i]->isInfoValid(id, pw))
        {
            currentMember = members[i];
            return true;
        }
    }
    return false;
}

/**
 * 함수 이름: LogIn::getUI()
 * 기능: boundary의 startInterface 호출
 */
void LogIn::getUI()
{
    LogInUI* logInUi = new LogInUI();
    logInUi->startInterface();
}
