#include <iostream>
using namespace std;

 
void print()
{
    

    int n=6;
    // Print upper half of the pyramid
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

    // Print lower half of the pyramid
    for (int i = 2; i <= n; i++) {
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
    int n=6;
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





     for (int i = 1; i <= n; i++) {
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
     cout<<endl;
     print();
    return 0;
}
