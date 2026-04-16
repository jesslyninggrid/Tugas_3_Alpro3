#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan n : ";
    cin >> n; // input angka

    cout << "H"; // cetak H dulu

    // ulang huruf 'o' sebanyak n
    for (int i = 0; i < n; i++) {
        cout << "o";
    }

    cout << "r"; // cetak r

    // ulang huruf 'e' sebanyak n
    for (int i = 0; i < n; i++) {
        cout << "e";
    }

    // ulang tanda seru sebanyak n
    for (int i = 0; i < n; i++) {
        cout << "!";
    }

    return 0;
}
