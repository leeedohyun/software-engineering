#pragma once
#include <string>
#include <vector>
#include "ApplyInfoCollection.h"
#include "ApplyUI.h"
#include "RecruitInfo.h"
using namespace std;

class Apply {
private:
	string inputedBusinessNumber; // input파일에서 받을 사업자 번호
	ApplyInfoCollection* applyCollection;
	ApplyUI* applyUI;
public:
	void createNewApplyment(RecruitInfo* recruitInfo); // 새로운 채용에 대한 지원
};
