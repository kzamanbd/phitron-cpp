#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int id1;
        char name1[100], section1;
        float marks1;

        cin >> id1 >> name1 >> section1 >> marks1;

        int id2;
        char name2[100], section2;
        float marks2;
        cin >> id2 >> name2 >> section2 >> marks2;

        int id3;
        char name3[100], section3;
        float marks3;
        cin >> id3 >> name3 >> section3 >> marks3;

        if ((marks1 >= marks2 && marks1 >= marks3) && (id1 < id2 && id1 < id3))
        {
            cout << id1 << " " << name1 << " " << section1 << " " << marks1;
        }
        else
        {
            if (marks2 >= marks3 && id2 < id3)
            {
                cout << id2 << " " << name2 << " " << section2 << " " << marks2;
            }
            else
            {
                cout << id3 << " " << name3 << " " << section3 << " " << marks3;
            }
        }
        cout << endl;
    }
    return 0;
}