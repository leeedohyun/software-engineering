#include "CheckApplyUI.h"

// ���� ���� ��ȸ �Լ�
void CheckApplyUI::selectApplyInfo() {
	checkApply->showApplyInfo(); 
}

// ���� ��� �Լ�
void CheckApplyUI::selectOneApply() {
	string businessNumber;
	in_fp >> businessNumber; // input ���Ͽ��� �Է¹��� ����� ��ȣ(���� ��Ҹ� ����)
	checkApply->cancelApply(businessNumber); // control Ŭ������ �Լ� ȣ��
}