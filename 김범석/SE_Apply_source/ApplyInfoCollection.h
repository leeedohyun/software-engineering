#pragma once
#include <string>
#include <vector>
#include "ApplyInfo.h"
using namespace std;

// 지원 정보 리스트들을 관리하는 클래스
class ApplyInfoCollection {
private:
	vector<ApplyInfo*> ownedApplyInfo;
public:
	void addNewApplyInfo(ApplyInfo* applyInfo);
	void getApplyInfoCollection(); // 일반 회원이 가지고 있는 지원 정보 리스트들 호출 함수
	void cancelApplyInfoCollection(string businessNumber);
};
