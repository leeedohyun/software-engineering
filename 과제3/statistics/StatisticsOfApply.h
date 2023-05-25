#include "common.h"
#include "ApplyInfo.h"
#include "GeneralMember.h"
#include "CompanyMember.h"
#include "StatisticsOfApplyUI.h"

#ifndef __STATISTICSOFAPPLY_H__
#define __STATISTICSOFAPPLY_H__

/**
* stereotype: Control
* 통계 계산하는 역할
*/
class StatisticsOfApply
{
private:
    StatisticsOfApplyUI* pStatisticsOfApplyUi;

public:
    StatisticsOfApply(StatisticsOfApplyUI* refStatisticsOfApplyUi);
    vector<string> getDateOfApply(GeneralMember* generalMember);
    vector<string> getNumberOfAppliedMember(CompanyMember* companyMember);
};


#endif 
