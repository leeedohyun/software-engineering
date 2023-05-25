#include "ApplyInfoCollection.h"

void ApplyInfoCollection::addNewApplyInfo(ApplyInfo* applyInfo) {
	ownedApplyInfo.push_back(applyInfo);
}

void ApplyInfoCollection::getApplyInfoCollection() {
	for (int i = 0; i < ownedApplyInfo.size(); i++) {
		ownedApplyInfo[i]->getDetails();
	}
}

void ApplyInfoCollection::cancelApplyInfoCollection(string businessNumber) {
	for (int i = 0; i < ownedApplyInfo.size(); i++) {
		if (ownedApplyInfo[i]->deleteApplyInfo(businessNumber)) { // ApplyInfo���� ����� ��ȣ�� ���� ���� ���� ������ �Լ� ����
			ownedApplyInfo.erase(ownedApplyInfo.begin() + i); // �÷��ǿ��� ���� ����
		};
	}
}
