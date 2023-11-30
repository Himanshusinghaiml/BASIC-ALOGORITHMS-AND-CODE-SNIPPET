#include<bits/stdc++.h>
using namespace std;
// maximum sum subarray using kadane algorithms 
void printOn3(int arr[], int n) {
    int sum = 0;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            sum = 0;
            for (int k = i; k <= j; k++) {
                sum += arr[k];
                cout << arr[k] << " ";
            }
            cout << "\n";
            maxi = max(sum, maxi);
        }
        cout << "\n";
    }
    cout << "Maximum sum subarray: " << maxi << endl;
}

void printOn2(int arr[], int n) {
    int maxi = INT_MIN;
    int start = 0, end = 0;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum > maxi) {
                maxi = sum;
                start = i;
                end = j;  // Update the ending index
            }
        }
    }

    cout << endl << "------------------------  print its subarray " << endl;
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << "Maximum sum subarray: " << maxi << endl;
}

void kadane(int arr[], int n) {
    int sum = 0;
    int maxi = INT_MIN;
    int end,start=0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum < 0) {
            sum=0;
            start=i+1;
        }
        if (sum > maxi) {
            maxi = sum;
            end=i;
        }
    }
    cout << "Maximum sum subarray using Kadane's algorithm: " << maxi << endl;
    for(int i=start;i<=end;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void maxi_product_subarray(int arr[], int n) {
    long long  maxi = INT_MIN;

    for (int i = 0; i < n; i++) {
        long long  mult = 1;  // Reset product for each starting index
        for (int j = i; j < n; j++) {
            mult *= arr[j];
            maxi = max(maxi, mult);
        }
    }

    cout << "Maximum product subarray: " << maxi << endl;
}

int main() {
    int arr[] = {5, -89, 9, 20, 25, -1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printOn3(arr, n);
    printOn2(arr, n);
    kadane(arr, n);
    maxi_product_subarray(arr,n);
    return 0;
}
