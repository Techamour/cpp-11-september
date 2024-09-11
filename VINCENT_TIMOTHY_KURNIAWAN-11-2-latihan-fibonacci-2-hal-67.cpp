// Online C++ compiler to run C++ program online
#include <cstdlib>
#include <iostream>
using namespace std;
int Fibonacci(int n) {
    if ((n == 0) || (n == 1)) {
        return (n);
    }

    // validasi yang ini diganti jadi 2 pak, karena yang dibuku 3. agar menghasilkan value fibonacci yang sesuai
    if (n >= 2) {
        return (Fibonacci(n-1) + Fibonacci(n-2));
    }
    return -1;
}

int main() {
    int n, i = 0;
    cout << "Masukan jumlah deret Fibonacci : ";
    cin >> n;
    cout << "Deret fibonacci untuk n = " << n << " adalah ";
    while (i < n) {
        cout << " " << Fibonacci(i) << ",";
        i++;
    }
    system("PAUSE");
    return 0;
}