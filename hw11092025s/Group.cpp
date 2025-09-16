#include "Group.h"
#include <cstring>

Group::Group()
{
    name = nullptr;
    list = nullptr;
    subList = nullptr;
    countOfStudents = 0;
    countOfSubj = 0;
}

Group::Group(const char* n, int studCount, int subjCount)
{
    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);

    countOfStudents = studCount;
    countOfSubj = subjCount;

    list = new Student[countOfStudents];
    subList = new Subject[countOfSubj];
}

Group::Group(const Group& obj)
{
    if (obj.name != nullptr)
    {
        name = new char[strlen(obj.name) + 1];
        strcpy_s(name, strlen(obj.name) + 1, obj.name);
    }
    else
    {
        name = nullptr;
    }

    countOfStudents = obj.countOfStudents;
    countOfSubj = obj.countOfSubj;

    if (countOfStudents > 0)
    {
        list = new Student[countOfStudents];
        for (int i = 0; i < countOfStudents; i++)
        {
            list[i] = obj.list[i]; 
        }
    }
    else
    {
        list = nullptr;
    }

    if (countOfSubj > 0)
    {
        subList = new Subject[countOfSubj];
        for (int i = 0; i < countOfSubj; i++)
        {
            subList[i] = obj.subList[i]; 
        }
    }
    else
    {
        subList = nullptr;
    }
}

Group::~Group()
{
    delete[] name;
    delete[] list;
    delete[] subList;
}

void Group::Init(const char* n, int studCount, int subjCount)
{
    if (name != nullptr)
    {
        delete[] name;
    }
    if (list != nullptr)
    {
        delete[] list;
    }
    if (subList != nullptr)
    {
        delete[] subList;
    }

    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);

    countOfStudents = studCount;
    countOfSubj = subjCount;

    list = new Student[countOfStudents];
    subList = new Subject[countOfSubj];
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

    cout << "Subjects: " << countOfSubj << endl;
    for (int i = 0; i < countOfSubj; i++)
    {
        subList[i].Print();
    }

    cout << "Students: " << countOfStudents << endl;

    for (int i = 0; i < countOfStudents; i++)
    {
        list[i].Print();
    }
}
