#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>


class student
{
private:
        std::string first;
        std::string last;
public:
    void setName(std::string, std::string);
    std::string fullName();
};

#endif
