#pragma once
#include "ApplyInfo.h"
#include "ApplyInfoCollection.h"

// 지원 정보 조회, 지원 취소를 담당하는 control 클래스

class CheckApply {
	ApplyInfoCollection* applyInfoCollection;
public:
	void showApplyInfo(); // 지원 정보 조회 함수
	void cancelApply(string businessNumber); // 지원 취소 함수
};