#include <bits/stdc++.h>
using namespace std;
bool isequal(int a[], int b[], int, int);
int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,2,3,4,5};
    int a=sizeof(arr1) / sizeof(int);
    int b=sizeof(arr2) / sizeof(int);
 
    if (isequal(arr1, arr2, a, b))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}
bool isequal(int arr1[], int arr2[], int c, int d)
{
    if (c!=d)
    {
        return false;
    }
    sort(arr1, c+arr1);
    sort(arr2, d+arr2);
    for (int i = 0; i < c; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return false;
        }
    return true;
    }
}