// // Filename: ReviewProgram.cpp
// Author: Juan Villafuerte
// Date: 09/27/2022
// Summary: testing of the test course

#include "ReviewProgram.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
    Course c1("23sss","ssss",3,"ssddsd","ssdsd22");
    cout << "Here is the information of the course inputted abouve\n\n\n";
    c1.print_Course();
    Course c2;
    cout <<"\n\nNow its the turn of the user to input course info..\n";
    c2.SetCourseInfo();
    c2.print_UserchoiceCourse();
    cout << "\n\n";
    c2.print_Courses_Entered();

    return 0;
}
