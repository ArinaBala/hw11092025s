#include "Student.h"
#include <iostream>
using namespace std;

int main()
{
    
    Student st1;
    st1.Print(); 

    cout << endl;

   
    Student st2("Nastya", 3); 
    st2.Print(); 

    cout << endl;

   
    st2.SetMark(0, 12);
    st2.SetMark(1, 10);
    st2.SetMark(2, 8);

    st2.Print();

    cout << "Average mark: " << st2.GetAverage() << endl;

    return 0;
}