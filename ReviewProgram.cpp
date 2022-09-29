// Filename: ReviewProgram.cpp
// Author: Juan Villafuerte
// Date: 09/27/2022
// Summary: implementation of the course class

#include "ReviewProgram.h"
#include<iostream>
#include<string>
using namespace std;

Course::Course()
{
    code = "NULL";
    CourseLocation = "NULL";
    CoNum = "0";
    Credits = 0;
    last = "NULL";
    CourseLocation = "undisclosed";
}Course::Course(std::string Course_Code, std::string Course_Number , int cred, std::string Last_Name, std::string Location)
{
code = Course_Code;
CoNum = Course_Number;
Credits = cred;
last = Last_Name;
CourseLocation = Location;
}
void Course::print_Course()
{
    std::cout << "Information about the courses taken by the student....\n\n";
    std::cout << "Course Code: " << code << "\n";
    std::cout << "Course Number: " << CoNum << "\n";
    std::cout << "Credits: " << Credits << "\n";
    std::cout << "Name OF Instructor: " << last << "\n";
    std::cout << "Classroom Location: " << CourseLocation << "\n";
}
void Course::SetCourseInfo()
{ int count1,count2,count3,count4,count5;
count1 = 0;
count2 = 0;
count3 = 0;
count4 = 0;
count5 = 0;

    for (int i = 0; i<5;i++)
    {
        std::cout << "Course Code " << count1++ + 1 << ": ";
        getline(cin,CourseCode[i]);
    }
    cout << endl << endl;
         for (int j=0;j<5;j++)
    {
        std::cout << "Course Number "<< count2++ + 1 << ": ";
        cin >> CourseNum[j];
    }
          cout << endl << endl;

         for (int k = 0; k<5;k++)
    {
        std::cout << "Course Credits "<< count3++ + 1 << ": ";
        cin >> CourseCred[k];
    }
      cout << endl << endl;
    for (int l=0;l<5;l++)
    {
        std::cout << "Instructors LastName "<< count4++ + 1 << ": ";
        cin >> CourseLast[l];
    }
      cout << endl << endl;

    for (int g=0;g<5;g++)
    {
        std::cout << "Course Location "<< count5++ + 1 << ": ";
        cin >> CourseLoc[g];
    }
}

void Course::print_Courses_Entered()
{
for (int i = 0;i<5;i++)
{
    std::cout << "\n\nCourse Code: " << CourseCode[i] << "\n";
    std::cout << "Course Number: " << CourseNum[i]<< "\n";
    std::cout << "Credits: " << CourseCred[i] << "\n";
    std::cout << "Name OF Instructor: " << CourseLast[i] << "\n";
    std::cout << "Classroom Location: " << CourseLoc[i] << "\n";
}

}
void Course::print_UserchoiceCourse()
{
    cout << "from what course are you looking for information for (1-5) ? ";
    cin >> userchoice;
    cout << "Here is the information for course " << userchoice;
    cout << endl << endl;
    cout <<"Course Code: " <<CourseCode[userchoice] << endl;
    cout <<"Course Num: " << CourseNum[userchoice] << endl;
    cout <<"Course Credits: " << CourseCred[userchoice] << endl;
    cout << "Instructor LastName: " << CourseLast[userchoice] << endl;
    cout << "Course Location: " << CourseLoc[userchoice] << endl;
}
/*
    for (int i = 0; i<5;i++)
    {
        std::cout << "Course Code: ";
        cin >> course_Info_Arr[i];


    for (int j = 0;j<5;j++)
    {

        std::cout << "Course Number: " << std::endl;
        std::cin >> course_Info_Arr[j];

    for (int k =0; k<5;k++)
    {
         std::cout << "Credits: " << std::endl;
        std::cin >> course_Info_Arr[k];


    for (int l =0; l<5;l++)
    {
      std::cout <<  "Last Name of instructor: " << std::endl;
        std::cin >> course_Info_Arr[l];


    for (int a=0; a<5;a++)
    {
         std::cout << "Credits: " << std::endl;
        std::cin >> course_Info_Arr[a];


cout << course_Info_Arr[i][j][k][l][a];
    }}}}}
    }
*/
