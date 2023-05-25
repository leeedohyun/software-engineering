#include "common.h"
#include "RecruitInfo.h"
#include "RecruitInfoSearchUI.h"

#ifndef __RECRUITINFOSEARCH_H__
#define __RECRUITINFOSEARCH_H__


/**
* stereotype: Control
* 채용 정보 검색 역할 수행
*/
class RecruitInfoSearch
{
private:
    RecruitInfoSearchUI* pRecruitInfoSearchUi;

public:
    vector<RecruitInfo*> showRecruitInfo(string companyName);
    void start();
};


#endif 
