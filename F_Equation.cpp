#include <bits/stdc++.h>
using namespace std;

long long int summation(float num, int length)
{
    long long int sum = 0;

    for (float i = 2; i < length; i += 2)
    {
        sum += pow(num, i);
    }
    return sum;
}

int main()
{

    int num, length;
    cin >> num >> length;
    cout << summation(num, length);
    return 0;
}