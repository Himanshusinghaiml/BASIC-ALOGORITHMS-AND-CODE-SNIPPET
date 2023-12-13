#include <iostream>
using namespace std;

void printOppositePyramid(int n) {
    for (int i = n; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }

        cout << endl;
    }
}

int main() {
    int height;
    cout << "Enter the height of the opposite pyramid: ";
    cin >> height;

    printOppositePyramid(height);

    return 0;
}
