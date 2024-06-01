#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    // Student(string name, int roll, int marks)
    // {
    //     this->name = name;
    //     this->roll = roll;
    //     this->marks = marks;
    // }
};

int main()
{
    int n;
    cin >> n;

    Student *a = new Student[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
    }

    Student mn;
    mn.marks = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i].marks > mn.marks)
        {
            mn = a[i];
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    cout << mn.name << " " << mn.roll << " " << mn.marks << endl;
    // }

    return 0;
}