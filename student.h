#ifndef STUDENT_H
#define STUDENT_H
#include<string>

class student 
{
    private:
        
       std::string firstName;
       std::string lastName;
        
    public:

        void setName(std::string, std::string);
        std::string fullName();

};

#endif
