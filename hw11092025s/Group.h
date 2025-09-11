#pragma once
#include <iostream>
#include "Student.h"
#include "Subject.h"
using namespace std;

class Group
{
private:
    char* name;

    Student* list;       //список студентов массив через указатель чтоб можно было задавать любое количество студентов в неи 
    int countOfStudents;

	Subject* subList;    //список предметов массив через указатель чтоб можно было задавать любое количество предметов
    int countOfSubj;
public:
    Group();                                                 
    Group(const char* n, int studCount, int subjCount);      
    void Print();                                           
    void Init(const char* n, int studCount, int subjCount);  
    ~Group();                                                
};
