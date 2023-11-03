#include <bits/stdc++.h>
using namespace std;
int binaryrecursive(vector<int> arr, int target, int i, int j)
{
    if (i <= j)
    {

        int mid = i + (j - i) / 2;
        if (arr[mid] == target)
            return target;
        if (arr[mid] < target)
            return binaryrecursive(arr, target, mid + 1, j);
        else
            return binaryrecursive(arr, target, i, mid - 1);
    }
    return -1;
}
int binary(vector<int> arr, int target)
{ // iterative method
    int i = 0;
    int j = arr.size() - 1;
    while (i <= j)
    {
        int mid = i + (j - i) / 2;
        if (arr[mid] == target)
            return target;
        else if (arr[mid] < target)
            i = mid + 1;
        else
            j = mid - 1;
    }
    return -1;
}
int main()
{
    vector<int> arr;
    for (int i = 1; i <= 10; i++)
    {
        arr.push_back(i * 10);
    }

    for (auto i : arr)
        cout << i << " "; // for printing the element of the vector
    int target = 30;
    // iterative method function
    cout << endl
         << " iterative ans" << endl;
    int ans = binary(arr, target);
    if (ans != -1)
        cout << endl
             << "element found :  " << ans << endl;
    else
        cout << endl
             << "not found" << endl;

    // rerursive call  binary search
    cout << "recursive ans" << endl;
    int i = 0;
    int j = arr.size() - 1;
    int binaryans = binaryrecursive(arr, target, i, j);
    if (binaryans != -1)
        cout << " element  found : " << binaryans << endl;
    else
        cout << " element  not found : ";

    return 0;
}