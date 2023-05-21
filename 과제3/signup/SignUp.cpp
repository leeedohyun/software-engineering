#include "SignUp.h"
#include "SignUpUI.h"
#include "GeneralMember.h"
#include "Member.h"

void SignUp::createGenerateMember(string name, string socialSecurityNumber,
                                  string id, string password) {
    GeneralMember* generalMember = new GeneralMember(name, socialSecurityNumber, id, password);
    MemberList* memberList = new MemberList();

    memberList->addNewMember(generalMember);

}

void SignUp::start() {
    SignUpUI::startInterface();
}