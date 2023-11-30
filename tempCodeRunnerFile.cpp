#include <bits/stdc++.h>
using namespace std;

void maxi_product_subarray(int arr[], int n) {
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++) {
        int mult = 1;  // Reset product for each starting index
        for (int j = i; j < n; j++) {
            mult *= arr[j];
            maxi = max(maxi, mult);
        }
    }

    cout << "Maximum product subarray: " << maxi << endl;
}

int main() {
    int arr[] = {6, -3, -10, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    maxi_product_subarray(arr, n);

    return 0;
}
