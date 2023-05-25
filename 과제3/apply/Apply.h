#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "ApplyInfo.h"

#ifndef __APPPLYINFOSEARCH_H__
#define __APPLYINFOSEARCH_H__

using namespace std;

/**
* stereotype: Control
* 일반 회원의 지원 수행
*/
class Apply
{
public:
	ApplyInfo* createNewApplyment(string businessNumber); 
    void start();
};

#endif