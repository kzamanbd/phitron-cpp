#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int *arr1 = new int[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr1[i];
    }
    int b;
    cin >> b;
    int *arr2 = new int[b];
    for (int i = 0; i < a; i++)
    {
        arr2[i] = arr1[i];
    }
    for (int i = a; i < b; i++)
    {
        cin >> arr2[i];
    }

    delete[] arr1;

    for (int i = 0; i < b; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}