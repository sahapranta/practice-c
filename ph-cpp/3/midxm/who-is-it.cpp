#include <iostream>

using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section;
    int marks;
};

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        Student a, b, c;
        cin >> a.id >> a.name >> a.section >> a.marks;
        cin >> b.id >> b.name >> b.section >> b.marks;
        cin >> c.id >> c.name >> c.section >> c.marks;

        if (a.marks >= b.marks && a.marks >= c.marks)
        {
            cout << a.id << " " << a.name << " " << a.section << " " << a.marks << endl;
        }
        else if (b.marks >= a.marks && b.marks >= c.marks)
        {
            cout << b.id << " " << b.name << " " << b.section << " " << b.marks << endl;
        }
        else
        {
            cout << c.id << " " << c.name << " " << c.section << " " << c.marks << endl;
        }
    }

    return 0;
}