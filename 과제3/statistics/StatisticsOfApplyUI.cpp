#include "StatisticsOfApplyUI.h"

extern ofstream out_fp;

/**
 * 함수 이름: StatisticsOfApplyUI::startInterface()
 * 기능: 지원 통계 결과 출력
 * @param results
 */
void StatisticsOfApplyUI::startInterface(vector<string> results)
{
    cout << "5.1. 지원 정보 통계" << endl;
    out_fp << "5.1. 지원 정보 통계" << endl;

    for (int i = 0; i < results.size(); i++) {

        cout << "> "<< results[i] << endl << endl;
        out_fp << "> "<< results[i] << endl << endl;
    }
}
