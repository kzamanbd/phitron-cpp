#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool compare(Student s1, Student s2)
{
    if (s1.marks > s2.marks)
    {
        return true;
    }
    else if (s1.marks == s2.marks)
    {
        return s1.roll < s2.roll;
    }
    return false;
}

int main()
{

    int n;
    cin >> n;
    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].roll >> s[i].marks;
    }

    sort(s, s + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << " " << s[i].roll << " " << s[i].marks << endl;
    }

    return 0;
}