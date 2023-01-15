#include <iostream>
using namespace std;


 struct BahanMakanan {
        int id;
        string nama;
        int jumlah;
        int harga;
        string keterangan;
};

    BahanMakanan daftarBahan[5] = {
        {
            1,
            "Tepung",
            3,
            12000,
            "1 tepung = 1 kg ",
        },
        {
            2,
            "Telor",
            90,
            45000,
            "16 telor = 1 kg"
        },
        {
            3,
            "Mentega",
            3,
            12000,
            "1 mentega = 1 kg"
        },
        {
            4,
            "Gula",
            3,
            14500,
            "1 gula = 1 kg"
        },
        {
            5,
            "Garam",
            3,
            12500,
            "1 garam = 1kg"
        }
    };

void prosesPembelian (const BahanMakanan bahan) {

} 

int main() {
    string nama_pembeli;
    int nomor_bahan, uang_bayar, jumlah_bahan;

    cout << "=====DAFTAR BAHAN MAKANAN=====" << endl;
   for (int i = 0; i < 5; i++) {
    cout << i + 1 << ". " << daftarBahan[i].nama << "\n";
   }
    cout << "Pilih Bahan Makanan ?" << endl;
    cin >> nomor_bahan;

// cout << "Masukkan Nama Pembeli" << endl;
// cin >> nama_pembeli;
// cout << "Pilih Nomor Bahan" << endl;
// cin >> nomor_bahan;
// cout << "Masukkan Jumlah Bahan" << endl;
// cin >> jumlah_bahan;
// cout << "Masukkan Jumlah Bayar" << endl;
// cin >> uang_bayar;


    if (nomor_bahan > 0 && nomor_bahan <= 5) {
        prosesPembelian (daftarBahan[nomor_bahan-1]);
    }
} 



