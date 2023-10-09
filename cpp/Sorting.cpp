#include<bits/stdc++.h>
using namespace std;
 void bubblesort(int arr[],int n)
 {  
    // best case O(N)
    // average case O(n^2)
    // worst case O(N^2)
 }
 void insertionsort(int arr[],int n)
 {
    // best case  O(N^2)
    // average case  O(N^2)
    // worst case    O(N^2)
 }
  void selectionsort(int arr[],int n) 
 {
    // best case O(N)
    // average case O(N^2)
    // worst case   O(N^2)
    
 }
int main()
{
    int arr[10]={50,40,1,2,7,8,5,3,80,20};
    int n=10;
    bubblesort(arr,n);
    insertionsort(arr,n);
    selectionsort(arr,n);
}