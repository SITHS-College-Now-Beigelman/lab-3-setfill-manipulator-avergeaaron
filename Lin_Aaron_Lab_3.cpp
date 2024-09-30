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
    string line1 = "Ways to access the Task Manager on your Windows computer:"; //text
    string line2 = "Press the key combination Ctrl + Shift + Escape"; //text
    string line3 = "Press the key combination Ctrl + Alt + Delete and select “Task Manager”"; //text
    string line4 = "Type “Task Manager” in the Windows Start menu search"; //text

    cout << setfill('#'); //fill all skipped space with #
    cout << "\n" << endl; //newline
    cout << setw(85) << "#" << endl; //push all the # to 85th columns

    cout << setfill(' '); //fill all skipped line with space
    cout << setw(0) << "#" << setw (84) << "#" << endl; //push one # to 0 columns and push one # to 84th columns
    
    cout << setw(0) << "#" << setw(2) << " " << line1 << setw(25) << "#" << endl; //push one # to 0 columns, push one space to 2nd columns, type line1, and push # to 25th columns
    cout << setw(0) << "#" << setw (84) << "#" << endl; //push one # to 0 columns and push one # to 84th columns
    
    cout << setw(0) << "#" << setw(9) << " " << line2 << setw(28) << "#" << endl; //push one # to 0 columns, push one space to 9th columns, type line2, and push # to 28th columns
    cout << setw(0) << "#" << setw(84) << "#" << endl; //push one # to 0 columns and push one # to 84th columns
    
    cout << setw(0) << "#" << setw(10) << " " << line3 << setw(3) << "#" << endl; //push one # to 0 columns, push one space to 10th columns, type line3, and push # to 3rd columns
    cout << setw(0) << "#" << setw(84) << "#" << endl; //push one # to 0 columns and push one # to 84th columns
    
    cout << setw(0) << "#" << setw(10) << " " << line4 << setw(22) << "#" << endl; //push one # to 0 columns, push one space to 10th columns, type line4, and push # to 22th columns
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