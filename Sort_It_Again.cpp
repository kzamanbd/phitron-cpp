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
    if (s1.eng_marks > s2.eng_marks)
    {
        return true;
    }
    else if (s1.eng_marks == s2.eng_marks)
    {
        if (s1.math_marks > s2.math_marks)
        {
            return true;
        }
        else if (s1.math_marks == s2.math_marks)
        {
            return s1.id < s2.id;
        }
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