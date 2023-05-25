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
		if (ownedApplyInfo[i]->deleteApplyInfo(businessNumber)) { // ApplyInfo에서 사업자 번호가 같은 지원 정보 있으면 함수 실행
			ownedApplyInfo.erase(ownedApplyInfo.begin() + i); // 컬렉션에서 원소 삭제
		};
	}
}
