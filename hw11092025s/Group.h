#pragma once
#include <iostream>
#include "Student.h"
#include "Subject.h"
using namespace std;

class Group
{
private:
    char* name;
    Student* list;
    int countOfStudents;

    Subject* subList;
    int countOfSubj;
public:
    Group();                                         
    Group(const char* n, int studCount, int subjCount); 
    Group(const Group& obj);                         
    ~Group();                                        

    void Init(const char* n, int studCount, int subjCount);
    void Print();
};
