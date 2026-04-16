#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan bilangan : ";
    cin >> n;

    int total = 0;

    // mulai dari 2, lompat 2 (biar cuma genap)
    for (int i = 2; i <= n; i += 2) {
        total += i * i; // tambahkan kuadratnya
    }

    cout << total;

    return 0;
}
