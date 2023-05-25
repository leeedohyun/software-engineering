#pragma once
#include "CheckApply.h"

/**
* stereotype: Boundary
* 채용 조회와 관련된 입출력 담당
*/
class CheckApplyUI
{
private:
	CheckApply* pCheckApply;
public:
	void selectApplyInfo();
	void selectOneApply();
};
