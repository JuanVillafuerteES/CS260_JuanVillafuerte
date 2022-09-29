// Filename: ReviewProgram.h
// Author: Juan Villafuerte
// Date: 09/27/2022
// Summary: Define a class, Course, to represent a college course.

#ifndef REVIEW_H
#define REVIEW_H
#include <string>
#include<iostream>

/*
 Comments: Classes were the one thing I didnt have time to study for
 which made me struggle on this review program since I didnt have
 time to go over the material.

 I was trying to make a 5d multi dimensional array for the course info
 but problems were occuring. I commented out the code for that section.
 I was trying to make it so that we can loop everything out so that it would]
 look cooler but the location array was causing problems due to it repeating more
 that it was supposed to do.

 I dont know why but the last array keeps looping twice for the first one
 but none of the rest do.

 I think this project would be easier if we did it instead with a struct
 because the array section of this lab would be easier..

 New Comments: Was able to solve the reason why the last loop was looping twice on
 the first rotation. I also did some code corrections to make my code look better
 and fit the criteria for the assignment better.


 Code Comments: In the section where the user inputs the info about the courses
 I tried to make it loop all the information at once so that the first thing entered
 would be the course code and then the CourseNum and so on in one continous loop and
 it would go to the next element to fill in the next course with the infomration
 containing to that course. For some reason the program was not looping how I wanted
 it to do dont know why maybe im forgetting something that's the reason why the program
 looks like this.
*/

class Course
{
public:
    Course(); // default constructor
    Course(std::string,std::string,int,std::string,std::string);

    void setCourseCode(std::string Course_Code) {code = Course_Code;}
    void setCourseNumber(std::string Course_Number) { CoNum = Course_Number;}
    void setCredits(int Cred) { Credits = Cred;}
    void setLastName(std::string Last_Name) { last = Last_Name;}
    void setCourse_Room (std::string Location) { CourseLocation = Location;}
    void SetCourseInfo();

    std::string CourseCode[5];
    std::string CourseNum[5];
    int CourseCred[5];
    std::string CourseLast[5];
    std::string CourseLoc[5];

    int userchoice;
    ~Course(){}
    void print_Course();
    void print_Courses_Entered();
    void print_UserchoiceCourse();


private:
    std::string code;
    std::string CoNum;
    int Credits;
    std::string last;
    std::string CourseLocation;
};
#endif // REVIEW_H
