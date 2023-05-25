#include "common.h"
#include "RegisterRecruit.h"

#ifndef UNTITLED_REGISTERRECRUITUI_H
#define UNTITLED_REGISTERRECRUITUI_H

class RegisterRecruitUI
{
private:
    RegisterRecruit* pRegisterRecruit;

public:
    RegisterRecruitUI();
    RegisterRecruitUI(RegisterRecruit* refRegisterRecruit);
    void createNewRecruit();
    void startInterface();
};



#endif //UNTITLED_REGISTERRECRUITUI_H
