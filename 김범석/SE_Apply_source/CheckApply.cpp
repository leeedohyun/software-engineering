#include "CheckApply.h"

// 지원 정보 조회 함수
void CheckApply::showApplyInfo() {
	applyInfoCollection->getApplyInfoCollection();
}

// 지원 취소 함수
void CheckApply::cancelApply(string businessNumber) {
	applyInfoCollection->cancelApplyInfoCollection(businessNumber); // ApplyInfoCollection 클래스의 함수 호출
}
