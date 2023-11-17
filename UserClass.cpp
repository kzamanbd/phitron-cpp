#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[50];
    int roll;
    double result;
};

int main()
{
    Student s, t;
    cin.getline(s.name, 50);
    cin >> s.roll >> s.result;
    getchar();
    cin.getline(t.name, 50);
    cin >> t.roll >> t.result;

    cout << s.name << " Roll: " << s.roll << " Result: " << s.result << endl;
    cout << t.name << " Roll: " << t.roll << " Result: " << t.result;
    return 0;
}