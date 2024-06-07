#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int cls;
    char s;
    int id;
    int math;
    int eng;
};

bool cmp(Student left, Student right)
{
    if (left.eng != right.eng)
    {
        return left.eng > right.eng;
    }

    if (left.math != right.math)
    {
        return left.math > right.math;
    }

    return left.id < right.id;
}

int main()
{
    int n;
    cin >> n;
    Student st[n];

    for (int i = 0; i < n; i++)
    {
        cin >> st[i].name >> st[i].cls >> st[i].s >> st[i].id >> st[i].math >> st[i].eng;
    }

    sort(st, st + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << st[i].name << " " << st[i].cls << " " << st[i].s << " " << st[i].id << " " << st[i].math << " " << st[i].eng << endl;
    }

    return 0;
}