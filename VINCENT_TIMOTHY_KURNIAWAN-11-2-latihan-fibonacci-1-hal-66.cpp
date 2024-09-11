// Online C++ compiler to run C++ program online
#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n, f1 = 0, h3 = 2, j = 0;
    cout << "Masukkan jumlah deret : ";
    cin >> n;
    cout << "Deret Fibonacci " << n << " bilangan : ";
    for (int i = 1; i <= n; ++i) {
        if (i == 1){
            cout << f1 << ", ";
        }
        if (i == 2){
            cout << f2 << ", ";
        }
        if (i >= 3){
            j = f1 + f2;
            f1 = f2;
            f2 = j;
            cout << j << ", ";
        }
    }
    system("PAUSE")
    return 0;
}