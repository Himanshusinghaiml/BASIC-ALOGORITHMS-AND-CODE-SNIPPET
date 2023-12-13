#include <bits/stdc++.h>
using namespace std;
int checkTriplet(int arr[], int n)
{
    // code here
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * arr[i];
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sum = arr[i] + arr[j + 1];
            for (int k = 0; k < n; k++)
            {
                if (sum == arr[k])
                {
                    cout << "true";
                    return 0;
                }
            }
        }
    }
    cout << "false";
}
int main()
{
    int arr[] = {3, 8, 5};
    int n = 3;
    checkTriplet(arr, n);
    return 0;
}