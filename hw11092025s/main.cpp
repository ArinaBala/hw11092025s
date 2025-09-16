#include <iostream>
#include "Student.h"
#include "Subject.h"
#include "Group.h"
using namespace std;

int main()
{
    cout << "Subject" << endl;
    Subject sub1("Math");
    sub1.Print();

    Subject sub2 = sub1; 
    sub2.Print();
    cout << endl;

    cout << "Student" << endl;
    Student st1("Nastya", 3);
    st1.SetMark(0, 12);
    st1.SetMark(1, 10);
    st1.SetMark(2, 8);
    st1.Print();

    Student st2 = st1; 
    st2.Print();
    cout << "Average st1: " << st1.GetAverage() << endl;
    cout << "Average st2: " << st2.GetAverage() << endl;
    cout << endl;

    cout << "Group" << endl;
    Group g1("Group-241", 2, 2);
    g1.Init("Group-241", 2, 2); 

    g1.Print();

    Group g2 = g1; 
    g2.Print();

    return 0;
}
