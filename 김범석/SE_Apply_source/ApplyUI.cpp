#include "ApplyUI.h"


/*
	함수 이름 : ApplyUI::applyNewRecruitment()
	기능	  : 지원한 채용의 회사이름, 사업자번호, 업무를 output.txt에 출력
	전달 인자 : 사업자번호
	반환값    : 없음
*/
void ApplyUI::startInterface(string companyName, string businessNumber, string task)
{
	out_fp << "4.2. 채용 지원" << endl;
	out_fp << "> " << companyName << " " << businessNumber << " " << task << endl;
	
}
