#include "student.h"
#include <string>


void student::setName(std::string firstName, std::string lastName)
{
    first = firstName;
    last = lastName;
}

std::string student::fullName()
{
        std::string name;
    name = first + " " + last;
    return name;
}
