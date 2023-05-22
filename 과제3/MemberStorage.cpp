#include <iostream>
#include "MemberStorage.h"

bool MemberStorage::isInfoValid(MemberInfo info)
{
    for(int i = 0; i < numOfMembers; i++)
    {
        if(info.id == MemberInfos[i].id && info.password == MemberInfos[i].password)
            return true;
    }
    return false;
}

void MemberStorage::addMemberToList(string id, string password)
{
    numOfMembers++;
    MemberInfo info(id, password);
}
