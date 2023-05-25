#include "CheckApplyUI.h"

// 지원 정보 조회 함수
void CheckApplyUI::selectApplyInfo() {
	checkApply->showApplyInfo(); 
}

// 지원 취소 함수
void CheckApplyUI::selectOneApply() {
	string businessNumber;
	in_fp >> businessNumber; // input 파일에서 입력받은 사업자 번호(지원 취소를 위한)
	checkApply->cancelApply(businessNumber); // control 클래스의 함수 호출
}