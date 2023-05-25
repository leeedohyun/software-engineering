#include "common.h"
#include "RegisterRecruit.h"

#ifndef __REGISTERRECRUITUI_H__
#define __REGISTERRECRUITUI_H__

/**
* stereotype: Boundary
* 채용 등록과 관련된 입출력 담당
*/
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



#endif 
