#include <cstdlib>
#include <iostream>

using namespace std;
int main () {
    int n;
    unsigned long long varFaktorial = 1;
    cout << "Masukkan Bilangan Bulat Positif : ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        varFaktorial = varFaktorial * i;
    }
    cout << "Nilai Faktorial " << n << " = "<< varFaktorial << endl;
    system("PAUSE");
    return 0;
}