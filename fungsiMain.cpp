#include <iostream>
#include <chrono> // Untuk delay
#include <thread> // Untuk sleep_for
#include <cmath>  // Library cmath
#include "kalkulator.h"

using namespace std;


// Fungsi utama
int main() {
    
    kalkulator kal;

    do {
        // Clear console
        system("CLS");

        // Input dari pengguna
        cout << "==================== WELCOME MY G ====================" << endl;
        double v0, A;
        cout << "Kecepatan Peluru (m/s)  : ";
        cin >> v0;
        cout << "Sudut Arah Peluru (deg) : ";
        cin >> A;

        // Konversi derajat ke radian
        double rad = A * kal.PI / 180.0;

        // Menghitung xmax dan hmax menggunakan fungsi
        double xmax = kal.hitungXmax(v0, rad, kal.G);
        double hmax = kal.hitungHmax(v0, rad, kal.G);

        // Menampilkan hasil
        kal.tampilkanHasil(xmax, hmax);

        // Meminta input untuk mengulang atau keluar
        cout << endl << endl;
        cout << "Y untuk mengulang penghitungan, N untuk keluar !!  ";
        cin >> kal.yesno;
        cout << endl;

        // Validasi input
        if (kal.yesno != 'Y' && kal.yesno != 'y' && kal.yesno != 'N' && kal.yesno != 'n') {
            cout << "Input error, otomatis kembali ke perhitungan" << endl;
            this_thread::sleep_for(chrono::seconds(2));
            kal.yesno = 'Y'; // Kembali ke perhitungan
        }

    } while (kal.yesno == 'Y' || kal.yesno == 'y');

    return 0;
}