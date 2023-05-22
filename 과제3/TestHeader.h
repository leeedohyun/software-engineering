#include <string>
#include <vector>

using namespace std;


class Member
{
private:
    string ID;
    string password;
    int memberType;
    string name = " ";
    
public:
    Member(string ID, string password);
    Member(string ID, string password, int memberType);
    Member(string name, string id, string password, int memberType);
    void deleteMember();
    bool isInfoValid(string id, string pw);
    string getID();
    string getPassword();
};


class LogIn
{
private:
Member* member;
public:
    LogIn();
    bool makeLogInInfo(string id, string pw);
};


class LogInUI
{
private:
    LogIn* logIn;
public:
    LogInUI();
    void insertInfo(string id, string pw);
    void startInterface();
};


class LogOut{
private:
    Member* member;
public:
    LogOut();
    void showLogOutDonePage();
};


class LogOutUI
{
private:
    LogOut* logOut;
public:
    LogOutUI();
    void startInterface();
    void proceedToLogOut();
};


class DeleteAccount
{
private:
    Member* member;
public:
    DeleteAccount();
    void showDeleteDonePage(); 
};


class DeleteAccountUI
{
private:
    DeleteAccount* deleteAccount;
public:
    DeleteAccountUI();
    void startInterface();
    void proceedToDelete();
};