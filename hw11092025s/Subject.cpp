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

void Subject::Init(const char* n)
{
    if (name != nullptr)
    {
        delete[] name;
    }
    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);
}

Subject::~Subject()
{
    delete[] name;
}