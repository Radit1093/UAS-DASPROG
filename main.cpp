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
        20000,
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
        "1 garam = 1 kg"
    }
};

int menghitungUangKembalian(int uangBayar, int totalHarga) {
    return uangBayar - totalHarga;
}

int main() {
    char repeat;
    do {
        string nama_pembeli, bahan_makan;
        int nomor_bahan, uang_bayar, jumlah_bahan;
        
        cout << "===== TOKO SERBA MAJU ===== \n" << endl;
        for (int i = 0; i < 5; i++) {
            cout << i + 1 << ". " << daftarBahan[i].nama << "\n";
        }

        cout << "\n";
        cout << "============================== \n" << endl;
        cout << "\n";
        cout << "Masukkan nama pembeli : ";
        getline(cin, nama_pembeli);
        if (nama_pembeli != "") {
            cout << "\n";
            cout << "Pilih nomor bahan : ";
            cin >> nomor_bahan;
            cout << "\n";
            cout << "Rincian bahan : " << daftarBahan[nomor_bahan - 1].nama << " ~ Rp " << daftarBahan[nomor_bahan - 1].harga << " | " << daftarBahan[nomor_bahan - 1].keterangan  << "\n\n";
            cout << "Masukkan jumlah bahan : ";
            cin >> jumlah_bahan;
            cout << "\n";
            cout << "Total harga : Rp " << daftarBahan[nomor_bahan - 1].harga * jumlah_bahan << "\n";
            cout << "\n";
            cout << "Masukkan uang bayar : Rp ";
            cin >> uang_bayar;
            cout << "\n";
            cout << "Uang kembalian : Rp " << menghitungUangKembalian(uang_bayar, (daftarBahan[nomor_bahan - 1].harga * jumlah_bahan)) << "\n";
            cout << "\n";
            cout << "Do you want to repeat purchasing? (y)es / (n)o : ";
            cin >> repeat;
            system ("CLS");
        } else {
            cout << "Mohon masukkan nama!";
        }

        system ("CLS");
        cout << "TERIMA KASIH TELAH BERBELANJA DISINI!, SILAHKAN DATANG KEMBALI!!" << endl;
    } while (repeat == 'y');
}
