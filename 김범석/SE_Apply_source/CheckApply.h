#pragma once
#include "ApplyInfo.h"
#include "ApplyInfoCollection.h"

// ���� ���� ��ȸ, ���� ��Ҹ� ����ϴ� control Ŭ����

class CheckApply {
	ApplyInfoCollection* applyInfoCollection;
public:
	void showApplyInfo(); // ���� ���� ��ȸ �Լ�
	void cancelApply(string businessNumber); // ���� ��� �Լ�
};