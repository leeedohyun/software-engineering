#pragma once
#include <string>
#include <vector>
#include "ApplyInfoCollection.h"
#include "ApplyUI.h"
#include "RecruitInfo.h"
using namespace std;

class Apply {
private:
	string inputedBusinessNumber; // input���Ͽ��� ���� ����� ��ȣ
	ApplyInfoCollection* applyCollection;
	ApplyUI* applyUI;
public:
	void createNewApplyment(RecruitInfo* recruitInfo); // ���ο� ä�뿡 ���� ����
};
