#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id, math_marks, eng_marks;
};

bool compare(Student s1, Student s2)
{
    int total_s1 = s1.math_marks + s1.eng_marks;
    int total_s2 = s2.math_marks + s2.eng_marks;

    if (total_s1 > total_s2)
    {
        return true;
    }
    else if (total_s1 == total_s2)
    {
        return s1.id < s2.id;
    }
    return false;
}

int main()
{
    // Write your code here
    int n;
    cin >> n;
    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].nm >> s[i].cls >> s[i].s >> s[i].id >> s[i].math_marks >> s[i].eng_marks;
    }

    sort(s, s + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << s[i].nm << " " << s[i].cls << " " << s[i].s << " " << s[i].id << " " << s[i].math_marks << " " << s[i].eng_marks << endl;
    }

    return 0;
}