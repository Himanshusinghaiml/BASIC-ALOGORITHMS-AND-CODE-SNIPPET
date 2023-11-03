#include <bits/stdc++.h>
using namespace std;
void bubblesort(int arr[], int n)
{
   cout << "this is bubble sort " << endl;
   for (int i = 0; i < n - 1; i++)
   {
      for (int j = 0; j < n - i - 1; j++) // this line some twist of the code
      {
         if (arr[j] > arr[j + 1])
            swap(arr[j], arr[j + 1]);
      }
   }
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
}
void selectionsort(int arr[], int n)
{
   cout << endl
        << " this is selection sort " << endl;
   for (int i = 0; i < n - 1; i++)
   {
      for (int j = i + 1; j < n; j++)
      {
         if (arr[j] < arr[i])
         {
            swap(arr[j], arr[i]);
         }
      }
   }
   for (int i = 0; i < n; i++)
   {
      cout << endl
           << " this is insertion sort " << endl;
      cout << arr[i] << " ";
   }
}
void insertionsort(int arr[], int n)
{
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
}
int main()
{
   int arr[5] = {10, 4, 5, 1, 15};
   int n = 5;
   cout << " Elements are given" << endl;
   for (int i = 0; i < 5; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;
   bubblesort(arr, n);
   selectionsort(arr, n);
   // insertionsort(arr,n);
}