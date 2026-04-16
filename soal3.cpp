#include <iostream>
using namespace std;

int main() {
    int A, B; // A sebagai tahun awal dan B sebagai jlh selisih tahun

    cout << "Masukkan tahun awal: "; // program minta input tahun awal
    cin >> A;

    cout << "Masukkan selisih tahun (positif untuk maju, negatif untuk mundur): "; // program minta input selisih tahun 
    cin >> B;

    if (B >= 0) { // jika b bernilai lebih dr 0 (artinya positif),
        for (int i = 0; i <= B; i++) { 
            int tahun = A + i; // maka tahun akan ditambah +1 sebanyak yang diminta oleh variabel B

          // rumus menentukan tahun kabisat: habis dibagi 400 → kabisat, atau habis dibagi 4 tapi tidak 100 → kabisat
            if ((tahun % 400 == 0) || (tahun % 4 == 0 && tahun % 100 != 0)) // rumus untuk menentukan tahun tsb termasuk kabisat atau bukan 
                cout << tahun << " kabisat" << endl; // jika benar maka akan muncul tulisan "kabisat"
            else
                cout << tahun << " bukan kabisat" << endl; //jika salah maka akan muncul tulisan "bukan kabisat"
        }
    } else { // jika nilai b  bernilai negatif, 
        for (int i = 0; i <= -B; i++) { 
            int tahun = A - i; // maka variabel tahun akan dikurang -1 sebanyak yang diminta variabel B

            if ((tahun % 400 == 0) || (tahun % 4 == 0 && tahun % 100 != 0)) // rumus menentukan tahun kabisat
                cout << tahun << " kabisat" << endl; // jika benar maka akan muncul tulisan "kabisat"
            else
                cout << tahun << " bukan kabisat" << endl; //jika salah maka akan muncul tulisan "bukan kabisat"
        }
    }

    return 0;
}



