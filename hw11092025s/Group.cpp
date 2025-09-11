#include "Group.h"
#include <cstring>

Group::Group()
{
    name = nullptr;
    countOfStudents = 0;
    countOfSubj = 0;
}

Group::Group(const char* n, int studCount, int subjCount)
{
    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);

    countOfStudents = studCount;
    countOfSubj = subjCount;
}

void Group::Print()
{
    if (name != nullptr)
    {
        cout << "Group: " << name << endl;
    }
    
    else
    {
    
        cout << "Group: none" << endl;
    
    }

    cout << "Subjects: " << countOfSubj  << endl;
    for (int i = 0; i < countOfSubj; i++)
    {
        subList[i].Print();
    }

    cout << "Students:" << countOfStudents << endl;
    for (int i = 0; i < countOfStudents; i++)
    {
        list[i].Print();
    }
}

void Group::Init(const char* n, int studCount, int subjCount)
{
    if (name != nullptr)
    {
        delete[] name;
    }

    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);

    countOfStudents = studCount;
    countOfSubj = subjCount;
}

Group::~Group()
{
    delete[] name;
}