#include "common.h"
#include "SignUp.h"

#ifndef __SIGNUPUI_H__
#define __SIGNUPUI_H__

/**
 * boundary
 * 로그인과 관련된 입출력 담당
 */
class SignUpUI
{
private:
    SignUp* pSignUpControl;

public:
    static void startInterface();
    void inputGeneralMemberInfo();
    void inputCompanyMemberInfo();
};


#endif 
