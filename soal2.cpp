#include <iostream>
using namespace std;

int main() {
    string kalimat; // inputan kalimat akan disimpan dalam variabel string 
    char huruf; // inputan huruf akan disimpan ke dlm variabel char karena hanya 1 huruf 

    cout << "Apa kalimatnya: "; // program minta input kalimat 
    getline(cin, kalimat); // menggunakan getline supaya program bisa membaca satu baris penuh termasuk spasi

    cout << "Apa karakter yang ingin dihapus dari kalimat tersebut: "; // program minta input karakter 
    cin >> huruf; 

    string hasil = ""; // variabel "hasil" disini fungsinya utk menyimpan kalimat baru setelah huruf tertentu dihapus
    int count = 0; // set variabel count(untuk menghitung berapa byk karakter yg dihapus) sebagai 0 di awal

    for (char c : kalimat) { //Untuk mengambil setiap karakter satu per satu dari string kalimat
        if (c != huruf) { // jika karakter yg dibaca tidak sesuai dengan inputan huruf diatas, maka
            hasil += c; // karakter tsb akan di masukkan ke dalam variabel "hasil"
        } else {
            count++; // jika karakternya sama, maka karakter tsb akan dihitung sebagai 1 dan akan terus bertambah seiring berjalannya looping
        }
    }

    cout << "Hasil: " << hasil << endl; // tampilkan hasil dari kalimat yang sudah di sorting tadi 
    cout << "Karakter terhapus = " << count << endl; // lalu tampilkan jumlah karakter yang sudah terhapus 

    return 0;
}
