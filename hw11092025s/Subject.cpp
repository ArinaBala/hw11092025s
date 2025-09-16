#include "Subject.h"
#include <cstring>

Subject::Subject()
{
    name = nullptr;
}

Subject::Subject(const char* n)
{
    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);
}

Subject::Subject(const Subject& obj)
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
}

Subject::~Subject()
{
    delete[] name;
}

void Subject::Init(const char* n)
{
    if (name != nullptr)
    {
        delete[] name;
    }
    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);
}

void Subject::Print()
{
    if (name != nullptr)
    {

        cout << "Subject: " << name << endl;
    }
    else
    {
        cout << "Subject: none" << endl;
    }
}
