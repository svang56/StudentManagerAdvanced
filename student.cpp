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


