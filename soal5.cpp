#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan bilangan : ";
    cin >> n; // input angka dari user

    // jika n kurang dari atau sama dengan 1
    // maka bukan bilangan prima
    if (n <= 1) {
        cout << "Bukan Prima";
        return 0; // program berhenti di sini
    }

    // loop untuk mengecek apakah ada pembagi selain 1 dan n
    for (int i = 2; i < n; i++) {

        // jika n habis dibagi i
        // berarti n punya faktor lain → bukan prima
        if (n % i == 0) {
            cout << "Bukan Prima";
            return 0; // langsung berhenti, tidak perlu lanjut cek
        }
    }

    // jika tidak ada angka yang bisa membagi n
    // berarti n adalah bilangan prima
    cout << "Prima";

    return 0; // program selesai
}
