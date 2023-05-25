#include <iostream>
#include <string>

#include "CheckRecruit.h"

using namespace std;


#ifndef UNTITLED_CHECKRECRUITUI_H
#define UNTITLED_CHECKRECRUITUI_H


class CheckRecruitUI
{
private:
    CheckRecruit* pCheckRecruit;
public:
    CheckRecruitUI(CheckRecruit* refCheckRecruit);
    void requestCheckRecruit();


};


#endif //UNTITLED_CHECKRECRUITUI_H
