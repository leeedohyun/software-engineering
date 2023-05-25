#pragma once
#include <vector>

#include "ApplyInfo.h"

#ifndef __CHECKAPPLY_H__
#define __CHECKAPPLY_H__

/**
* stereotype: Control
* 지원 조회와 관련된 역할 수행
*/
class CheckApply
{
public:
	vector<ApplyInfo*> showApplyInfo(); 
	ApplyInfo* cancelApply(string businessNumber); 
};

#endif