#include "ApplyUI.h"


/*
	�Լ� �̸� : ApplyUI::applyNewRecruitment()
	���	  : ������ ä���� ȸ���̸�, ����ڹ�ȣ, ������ output.txt�� ���
	���� ���� : ����ڹ�ȣ
	��ȯ��    : ����
*/
void ApplyUI::startInterface(string companyName, string businessNumber, string task)
{
	out_fp << "4.2. ä�� ����" << endl;
	out_fp << "> " << companyName << " " << businessNumber << " " << task << endl;
	
}
