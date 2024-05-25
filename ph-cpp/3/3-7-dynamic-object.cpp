#include <iostream>

using namespace std;

class Student
{
public:
    int cls;
    int roll;
    double gpa;

    Student(int c, int r, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};

Student *fun()
{
    Student *rahim = new Student(9, 5, 4.34);
    return rahim;
}

int main()
{
    // Student karim(9, 5, 4.34);
    Student *karim = fun();
    // cout << rahim.cls << " " << rahim.roll << " " << rahim.gpa << endl;
    cout << karim->cls << " " << karim->roll << " " << karim->gpa << endl;

    free(karim);

    return 0;
}