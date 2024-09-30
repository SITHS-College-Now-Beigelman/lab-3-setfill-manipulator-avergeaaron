// Aaron Lin
// 09/30/2023
// Lab 3

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// beginning of code
int main()
{
    cout << setfill('#'); //fill all skipped space with #
    cout << "\n" << endl; //newline
    cout << setw(85) << "#" << endl; //push all the # to 85th columns

    cout << setfill(' '); //fill all skipped line with space
    cout << setw(0) << "#" << setw (84) << "#" << endl; //push one # to 0 columns and push one # to 84th columns
    
    cout << setw(0) << "#" << setw(2) << " " << "Ways to access the Task Manager on your Windows computer:" << setw(25) << "#" << endl; //push one # to 0 columns, push one space to 2nd columns, type text, and push # to 25th columns
    cout << setw(0) << "#" << setw (84) << "#" << endl; //push one # to 0 columns and push one # to 84th columns
    
    cout << setw(0) << "#" << setw(9) << " " << "Press the key combination Ctrl + Shift + Escape" << setw(28) << "#" << endl; //push one # to 0 columns, push one space to 9th columns, type text, and push # to 28th columns
    cout << setw(0) << "#" << setw(84) << "#" << endl; //push one # to 0 columns and push one # to 84th columns
    
    cout << setw(0) << "#" << setw(10) << " " << "Press the key combination Ctrl + Alt + Delete and select “Task Manager”" << setw(3) << "#" << endl; //push one # to 0 columns, push one space to 10th columns, type text, and push # to 3rd columns
    cout << setw(0) << "#" << setw(84) << "#" << endl; //push one # to 0 columns and push one # to 84th columns
    
    cout << setw(0) << "#" << setw(10) << " " << "Type “Task Manager” in the Windows Start menu search" << setw(22) << "#" << endl; //push one # to 0 columns, push one space to 10th columns, type text, and push # to 22th columns
    cout << setw(0) << "#" << setw(84) << "#" << endl; //push one # to 0 columns and push one # to 84th columns

    cout << setfill('#'); //fill all skipped space with #
    cout << setw(85) << "#" << endl; //push all the # to 85th columns
    cout << "\n" << endl; //newline
    
    return 0; //ends the code
}

/*

#####################################################################################
#                                                                                   #
#  Ways to access the Task Manager on your Windows computer:                        #
#                                                                                   #
#         Press the key combination Ctrl + Shift + Escape                           #
#                                                                                   #
#          Press the key combination Ctrl + Alt + Delete and select “Task Manager”  #
#                                                                                   #
#          Type “Task Manager” in the Windows Start menu search                     #
#                                                                                   #
#####################################################################################

*/