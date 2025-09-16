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
    Subject(const Subject& obj);      
    ~Subject();                        

    void Init(const char* n);
    void Print();
};
