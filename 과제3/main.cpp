#include <iostream>
#include <fstream>
#include <vector>
#include "TestHeader.h"

using namespace std;

int main()
{
    ifstream readFile;
    int menu1, menu2, menu3 = 0;
    readFile.open("input.txt");


    static vector<Member*> memberList;
    static Member* currentMember;


    if(readFile.is_open())
    {
        int num = 1;
        while(!readFile.eof())
        {
            char arr[256];
            readFile.getline(arr, 256);

            readFile >> menu1;
            readFile >> menu2;
            // readFile >> menu3;

            switch (menu1)
            {
                case 1:
                    switch (menu2)
                    {
                        case 1:

                            break;
                        case 2:
                            DeleteAccountUI* deleteAccountUI = new DeleteAccountUI();
                            deleteAccountUI->startInterface();
                            break;
                    }
                    break;
                case 2:
                    switch (menu2)
                        {
                            case 1:
                                LogInUI* logInUI = new LogInUI();
                                logInUI->startInterface();
                                break;
                            case 2:
                                LogOutUI* logOutUI = new LogOutUI();
                                logOutUI->startInterface();
                                break;
                        }
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
                case 6:
                    break;
            }
            cout << menu1 << " " << menu2 << endl;
        }
    }

    return 0;
}