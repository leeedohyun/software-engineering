#include <iostream>
#include <string>

#include "CheckRecruit.h"

using namespace std;


#ifndef __CHECKRECRUITUI_H__
#define __CHECKRECRUITUI_H__

/**
* stereotype: Boundary
* 회사 회원이 등록한 채용 정보를 조회에 필요한 입출력 담당
*/
class CheckRecruitUI
{
private:
    CheckRecruit* pCheckRecruit;

public:
    CheckRecruitUI(CheckRecruit* refCheckRecruit);
    void requestCheckRecruit();
};


#endif
