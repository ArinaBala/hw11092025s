#pragma once
#include <iostream>
using namespace std;

class Subject
{
private:
    char* name;
public:
    Subject();                          
    Subject(const char* n);             
    void Print();                       
    void Init(const char* n);          
    ~Subject();                        
};