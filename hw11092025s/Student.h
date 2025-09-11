#pragma once
#include <iostream>
using namespace std;

class Student
{
private:
    char* name;
    int* marks;   
    int size;     
public:
    Student();                               
    Student(const char* n, int s);            
    void Print();                             
    void Init(const char* n, int s);          
    void SetMark(int index, int value);       
    double GetAverage();                      
    ~Student();                               
};