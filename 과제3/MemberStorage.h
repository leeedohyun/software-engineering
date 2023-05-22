#include <string>
#include <vector>
#define MAX_NUM_OF_MEMBERS 100


typedef struct{
    string id;
    string password;
}MemberInfo;

class MemberStorage
{
private:
    int numOfMembers = 0;
    // static MemberInfo MemberInfos[MAX_NUM_OF_MEMBERS];
    vector<MemberInfo> MemberInfos;

public:
    void addMemberToList(string id, string password);
    bool isInfoValid(MemberInfo info);
};