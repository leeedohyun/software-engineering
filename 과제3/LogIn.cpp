#include "LogIn.h"
#include "LogInUI.h"

extern vector<Member*> members;
extern Member* currentMember;

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

void LogIn::getUI()
{
    LogInUI* logInUi = new LogInUI();
    logInUi->startInterface();
}
