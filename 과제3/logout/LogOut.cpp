#include "LogOut.h"

extern Member* currentMember;

/**
 * 함수 이름: LogOut::showLogOutDonePage()
 * 반환 타입: string
 * 기능: 로그아웃하는 회원의 아이디를 반환
 * @return 로그아웃하는 회원의 아이디
 */
string LogOut::showLogOutDonePage()
{
    return currentMember->getId();
}

/**
 * 함수 이름: LogOut::getUI()
 * 반환 타입: LogOutUI*
 * @return
 */
LogOutUI* LogOut::getUI()
{
    return pLogOutUI;
}