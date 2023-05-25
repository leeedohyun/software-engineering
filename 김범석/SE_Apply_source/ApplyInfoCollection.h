#pragma once
#include <string>
#include <vector>
#include "ApplyInfo.h"
using namespace std;

// ���� ���� ����Ʈ���� �����ϴ� Ŭ����
class ApplyInfoCollection {
private:
	vector<ApplyInfo*> ownedApplyInfo;
public:
	void addNewApplyInfo(ApplyInfo* applyInfo);
	void getApplyInfoCollection(); // �Ϲ� ȸ���� ������ �ִ� ���� ���� ����Ʈ�� ȣ�� �Լ�
	void cancelApplyInfoCollection(string businessNumber);
};
