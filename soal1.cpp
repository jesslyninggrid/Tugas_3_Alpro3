#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan batas deret bilangan: "; // program meminta untuk menginput batas deret yang nanti bakal ditampilkan
    cin >> n; // bilangan batas di simpan sebagai n 

    int nilai = 1; // set nilai awal = 1
    cout << nilai; // munculkan angka 1 karena di setiap deret pola ini pasti diawali dengan angka 1 

    for (int i = 2; i <= n; i++) { // i disini sebagai urutan nilai yang muncul, lalu urutan angka tsb tidak boleh lebih besar dari n, dan setiap looping ditambah 1  
        if (i % 2 == 0) // jika urutan nilai nya genap misalnya nilai kedua maupun nilai keempat dan seterusnya,
            nilai += 5; // maka variabel "nilai" tadi di berlakukan +5
        else
            nilai += 3; // jika bukan urutan genap maka hanya ditambah +3

        cout << " " << nilai; // lalu setiap angka akan dicetak dan di batasi dengan spasi sebagai jeda tiap urutan angka 
    }

    return 0;
}
