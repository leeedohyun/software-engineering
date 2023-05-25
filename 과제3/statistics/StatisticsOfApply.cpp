#include "StatisticsOfApply.h"
#include <algorithm>

using namespace std;

extern vector<Member*> members;

/**
 * 함수 이름: StatisticsOfApply::StatisticsOfApply()
 * @param refStatisticOfApplyUi
 */
StatisticsOfApply::StatisticsOfApply(StatisticsOfApplyUI* refStatisticOfApplyUi)
{
    pStatisticsOfApplyUi = refStatisticOfApplyUi;
}

/**
 * 함수 이름: StatisticsOfApply::getDateOfApply()
 * 반환 타입: vector<string>
 * 기능: 일반 회원의 지원 리스트에서 업무를 나누고 업무별 지원 횟수 계산
 * @param generalMember
 * @return 업무와 지원 횟수
 */
vector<string> StatisticsOfApply::getDateOfApply(GeneralMember *generalMember)
{
    vector<ApplyInfo*> applyInfos = generalMember->getApplyList();
    vector<string> tasks;
    vector<string> result;


    for (int i = 0; i < applyInfos.size(); i++) {
        auto iter = find(tasks.begin(), tasks.end(), applyInfos[i]->getTask());
        if(iter == tasks.end())
        {
            tasks.push_back(applyInfos[i]->getTask());
        }
    }

    vector<int> counts(tasks.size(), 0);


    for (int i = 0; i < tasks.size(); i++) {

        for (int j = 0; j < tasks.size(); j++) {
            if (applyInfos[j]->getTask() == tasks[i]) {
                int num = counts[i];
                counts[i] = num + 1;
            }
        }

        result.push_back( tasks[i] + " " + to_string(counts[i]));
    }

    return result;
}

/**
 * 함수 이름: StatisticsOfApply::getNumberOfAppliedMember()
 * 반환 타입: vector<string>
 * 기능: 회사 회원의 채용 리스트에서 업무를 분류하고, 업무별 지원자 수 계산
 * @param companyMember
 * @return 업무와 업무별 지원자 수
 */
vector<string> StatisticsOfApply::getNumberOfAppliedMember(CompanyMember* companyMember)
{
    //채용 리스트의 업무 별로 task vector에 이름 저장
    vector<RecruitInfo*> recruitInfos = companyMember->getOwnedRecruitInfoCollection();
    vector<string> tasks;
    vector<string> result;


    for (int i = 0; i < recruitInfos.size(); i++) {
        auto iter = find(tasks.begin(), tasks.end(), recruitInfos[i]->getTask());
        if(iter == tasks.end())
        {
            tasks.push_back(recruitInfos[i]->getTask());
        }
    }

    vector<int> counts(tasks.size(), 0);


    //업무, 사업자 번호가 동일한 지원을 체크
    for(int i = 0; i < members.size(); i++)
    {
        if(members[i]->getMemberType() == 2)
        {
            GeneralMember* generalMember = dynamic_cast<GeneralMember*>(members[i]);
            for(int j = 0; j < generalMember->getApplyList().size(); j++)
            {
                if(companyMember->getBusinessNumber() == generalMember->getApplyList()[j]->getBusinessNumber())
                {
                    auto iter = find(tasks.begin(), tasks.end(), generalMember->getApplyList()[j]->getTask());
                    counts[iter - tasks.begin()]++;
                }
            }
        }
    }
    for(int i = 0; i < tasks.size(); i++)
    {
        result.push_back( tasks[i] + " " + to_string(counts[i]));
    }
    return result;
}