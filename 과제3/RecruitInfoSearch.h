#include "common.h"
#include "RecruitInfo.h"
#include "RecruitInfoSearchUI.h"

#ifndef UNTITLED_RECRUITINFOSEARCH_H
#define UNTITLED_RECRUITINFOSEARCH_H


class RecruitInfoSearch {
private:
    vector<RecruitInfo*> recruitInfoCollection;
    RecruitInfoSearchUI* recruitInfoSearchUi;

public:
    vector<RecruitInfo*> showRecruitInfo(string companyName);
    void start();
};


#endif //UNTITLED_RECRUITINFOSEARCH_H
