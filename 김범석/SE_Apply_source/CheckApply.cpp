#include "CheckApply.h"

// ���� ���� ��ȸ �Լ�
void CheckApply::showApplyInfo() {
	applyInfoCollection->getApplyInfoCollection();
}

// ���� ��� �Լ�
void CheckApply::cancelApply(string businessNumber) {
	applyInfoCollection->cancelApplyInfoCollection(businessNumber); // ApplyInfoCollection Ŭ������ �Լ� ȣ��
}
