#include "Member.h"
#include "ApplyInfo.h"

#ifndef __GENERALMEMBER_H__
#define __GENERALMEMBER_H__


/**
* stereotype: Entity
* 회원을 상속받아 일반 회원의 정보 표현
*/
class GeneralMember : public Member
{
private:
    string socialSecurityNumber;
    vector<ApplyInfo*> applyList;

public:
    GeneralMember(string name, string socialSecurityNumber, string id, string password);
    vector<ApplyInfo *> getApplyList();
    void addNewApplyInfo(ApplyInfo *pInfo);
    void cancelApply(int index);
};


#endif
