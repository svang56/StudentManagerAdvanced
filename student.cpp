#include "student.h"
#include <string>
#include <iostream>

using namespace std;
string student::fullName()
{
    firstName.append(" ");
    firstName.append(lastName);
    return firstName;
}

void student::setName(string f, string l)
{
    firstName = f;
    
    lastName = l;

}
void student::addGrade(double value)
{
    grade.push_back(value);  
}

double student::getScore()
{
    double number = 0;

    for(int i = 0; i < grade.size(); i++)
    {
        number = number + grade[i];
    }
    if(grade.size() != 0)
    {
    return number = number / grade.size();
    }
    else
    {
    return 0;
    }
}


