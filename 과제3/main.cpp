#include <iostream>
#include <fstream>
#include <vector>
#include "TestHeader.h"
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

ifstream in_fp;
ofstream out_fp;
static vector<Member*> memberList;
static Member* currentMember;

int main()
{
    
    int menu_level_1, menu_level_2 = 0;
    in_fp.open(INPUT_FILE_NAME, ios::in);
    out_fp.open(OUTPUT_FILE_NAME, ios::out);


    if (!in_fp.is_open()) {
        cerr << "Could not open the file - '" << INPUT_FILE_NAME << "'" << endl;
        return EXIT_FAILURE;
    }

    if(in_fp.is_open())
    {
        int num = 1;
        while(!in_fp.eof())
        {
            char arr[256];
            in_fp.getline(arr, 256);

            in_fp >> menu_level_1;
            in_fp >> menu_level_2;


            switch (menu_level_1)
            {
                case 1:
                    switch (menu_level_2)
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
                    switch (menu_level_2)
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
            cout << menu_level_1 << " " << menu_level_2 << endl;
        }
    }

    in_fp.close();
    out_fp.close();
    
    return 0;
}