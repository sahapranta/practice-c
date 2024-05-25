#include <iostream>

using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};

int main()
{
    Student a;

    a.roll = 100;
    a.cgpa = 3.45;

    char tmp[100] = "Pranta Saha";

    strcpy(a.name, tmp);

    cout << a.name << ", ";
    cout << a.roll << ", ";
    cout << a.cgpa << endl;

    Student b, c, d;
    cin >> b.name >> b.roll >> b.cgpa;
    cout << b.name << ", " << b.roll << ", " << b.cgpa << endl;
    
    cin.ignore();
    cin.getline(c.name, 100);
    cin >> c.roll >> c.cgpa;
    
    cin.ignore();
    cin.getline(d.name, 100);
    cin >> d.roll >> d.cgpa;

    cout << c.name << ", " << c.roll << ", " << c.cgpa << endl;
    cout << d.name << ", " << d.roll << ", " << d.cgpa << endl;

    return 0;
}