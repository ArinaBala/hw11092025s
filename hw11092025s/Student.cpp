#include "Student.h"
#include <cstring>

Student::Student()
{
    name = nullptr;
    marks = nullptr;
    size = 0;
}

Student::Student(const char* n, int s)
{
    size = s;
    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);
    marks = new int[size];
    for (int i = 0; i < size; i++)
    {
        marks[i] = 0;
    }
}

void Student::Print()
{
    if (name != nullptr)
    {
        cout << "Student: " << name << endl;
    }
    else
    {
        cout << "Student: none" << endl;
    }

    cout << "Marks: ";
    if (marks != nullptr)
    {
        for (int i = 0; i < size; i++)
            cout << marks[i] << " ";
    }
    else
    {
        cout << "There aren`t any marks";
    }
    cout << endl;
}

void Student::Init(const char* n, int s)
{
    if (name != nullptr)
    {
        delete[] name;
    }
    if (marks != nullptr)
    {
        delete[] marks;
    }

    size = s;
    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);
    marks = new int[size];
    for (int i = 0; i < size; i++)
    {
        marks[i] = 0;
    }
}

void Student::SetMark(int index, int value)
{
    if (index >= 0 && index < size)
    {
        marks[index] = value;
    }
}

double Student::GetAverage()
{
    if (size == 0)
    {
        return 0;
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
    sum += marks[i];
    }
    return sum * 1.0 / size;
}

Student::~Student()
{
    delete[] name;
    delete[] marks;
}