#include <iostream>

using namespace std;
    int buku = 3500;
    int pulpen = 2500;
    int tipeX = 5000;
    int penggaris = 5000;
    int penghapus = 1000;
    int pensil = 2000;
    int total;

//function tampilan
int tampilan() {
    int pilih;
    int jumlah;
    //char lanjut;
    int uangUser;
    int bayar;
    int kembalian;


    cout << "======== Nama Barang & Harga ========\n\n";
    cout << "1.Buku Sidu = Rp 3.500" << endl;
    cout << "2.Pulpen    = Rp 2.500" << endl;
    cout << "3.Tipe X    = Rp 5.000" << endl;
    cout << "4.Penggaris = Rp 5.000" << endl;
    cout << "5.Penghapus = Rp 1.000" << endl;
    cout << "6.Pensil    = Rp 2.000" << endl;

    cout << "\nPilih Barang : "; cin >> pilih;

    switch (pilih) {
        case 1:
            cout << "\nBarang Yang Anda Pilih : 1.Buku Sidu";
            cout << "\nJumlah Barang : "; cin >> jumlah;
            bayar = buku * jumlah;
            cout << "\nTotal Pembayaran : " << bayar << endl;
            cout << "-------------------------" << endl;

            //Pembayaran
            cout << "Masukan Uang Anda : "; cin >> uangUser;

            //Semua Kondisi ketika uangUser kurang dari bayar belum selesai.
            if (uangUser < bayar) {
                cout << "\nUang Anda Kurang! Tidak Dapat Melanjutkan Transaksi!" << endl;
                cout << "\n----- Terimakasih -----";

            }else if (uangUser > bayar) {
                kembalian = uangUser - bayar;
                cout << "Kembalian : " << kembalian;
                cout << "\n\nTransaksi Anda Berhasil!" << endl;
                cout << "\n----- Terimakasih -----";

            }else if (uangUser == bayar) {
                cout << "\nTransaksi Anda Berhasil!" << endl;
                cout << "\n----- Terimakasih -----";

            }else
                (cout << "Invalid!");
            break;

        case 2:
            cout << "\nBarang Yang Anda Pilih : 2.Pulpen";
            cout << "\nJumlah Barang : "; cin >> jumlah;
            bayar = pulpen * jumlah;
            cout << "\nTotal Pembayaran : " << bayar << endl;
            cout << "-------------------------" << endl;


            //Pembayaran
            cout << "Masukan Uang Anda : "; cin >> uangUser;

            if (uangUser < bayar) {
                cout << "\nUang Anda Kurang! Tidak Dapat Melanjutkan Transaksi!" << endl;
                cout << "\n----- Terimakasih -----";

            }else if (uangUser > bayar) {
                kembalian = uangUser - bayar;
                cout << "Kembalian : " << kembalian;
                cout << "\n\nTransaksi Anda Berhasil!" << endl;
                cout << "\n----- Terimakasih -----";

            }else if (uangUser == bayar) {
                cout << "\nTransaksi Anda Berhasil!" << endl;
                cout << "\n----- Terimakasih -----";

            }else
                (cout << "Invalid!");
            break;

        case 3:
            cout << "\nBarang Yang Anda Pilih : 3.Tipe X";
            cout << "\nJumlah Barang : "; cin >> jumlah;
            bayar = tipeX * jumlah;
            cout << "\nTotal Pembayaran : " << bayar << endl;
            cout << "-------------------------" << endl;

            //Pembayaran
            cout << "Masukan Uang Anda : "; cin >> uangUser;

            if (uangUser < bayar) {
                cout << "\nUang Anda Kurang! Tidak Dapat Melanjutkan Transaksi!" << endl;
                cout << "\n----- Terimakasih -----";

            }else if (uangUser > bayar) {
                kembalian = uangUser - bayar;
                cout << "Kembalian : " << kembalian;
                cout << "\n\nTransaksi Anda Berhasil!" << endl;
                cout << "\n----- Terimakasih -----";

            }else if (uangUser == bayar) {
                cout << "\nTransaksi Anda Berhasil!" << endl;
                cout << "\n----- Terimakasih -----";

            }else
                (cout << "Invalid!");
            break;

        case 4:
            cout << "\nBarang Yang Anda Pilih : 4.Penggaris";
            cout << "\nJumlah Barang : "; cin >> jumlah;
            bayar = penggaris * jumlah;
            cout << "\nTotal Pembayaran : " << bayar << endl;
            cout << "-------------------------" << endl;

            //Pembayaran
            cout << "Masukan Uang Anda : "; cin >> uangUser;

            if (uangUser < bayar) {
                cout << "\nUang Anda Kurang! Tidak Dapat Melanjutkan Transaksi!" << endl;
                cout << "\n----- Terimakasih -----";

            }else if (uangUser > bayar) {
                kembalian = uangUser - bayar;
                cout << "Kembalian : " << kembalian;
                cout << "\n\nTransaksi Anda Berhasil!" << endl;
                cout << "\n----- Terimakasih -----";

            }else if (uangUser == bayar) {
                cout << "\nTransaksi Anda Berhasil!" << endl;
                cout << "\n----- Terimakasih -----";

            }else
                (cout << "Invalid!");
            break;

        case 5:
            cout << "\nBarang Yang Anda Pilih : 5.Penghapus";
            cout << "\nJumlah Barang : "; cin >> jumlah;
            bayar = penghapus * jumlah;
            cout << "\nTotal Pembayaran : " << bayar << endl;
            cout << "-------------------------" << endl;

            //Pembayaran
            cout << "Masukan Uang Anda : "; cin >> uangUser;

            if (uangUser < bayar) {
                cout << "\nUang Anda Kurang! Tidak Dapat Melanjutkan Transaksi!" << endl;
                cout << "\n----- Terimakasih -----";

            }else if (uangUser > bayar) {
                kembalian = uangUser - bayar;
                cout << "Kembalian : " << kembalian;
                cout << "\n\nTransaksi Anda Berhasil!" << endl;
                cout << "\n----- Terimakasih -----";

            }else if (uangUser == bayar) {
                cout << "\nTransaksi Anda Berhasil!" << endl;
                cout << "\n----- Terimakasih -----";

            }else
                (cout << "Invalid!");
            break;

        case 6:
            cout << "\nBarang Yang Anda Pilih : 6.Pensil";
            cout << "\nJumlah Barang : "; cin >> jumlah;
            bayar = pensil * jumlah;
            cout << "\nTotal Pembayaran : " << bayar << endl;
            cout << "-------------------------" << endl;

            //Pembayaran
            cout << "Masukan Uang Anda : "; cin >> uangUser;

            if (uangUser < bayar) {
                cout << "\nUang Anda Kurang! Tidak Dapat Melanjutkan Transaksi!" << endl;
                cout << "\n----- Terimakasih -----";

            }else if (uangUser > bayar) {
                kembalian = uangUser - bayar;
                cout << "Kembalian : " << kembalian;
                cout << "\n\nTransaksi Anda Berhasil!" << endl;
                cout << "\n----- Terimakasih -----";

            }else if (uangUser == bayar) {
                cout << "\nTransaksi Anda Berhasil!" << endl;
                cout << "\n----- Terimakasih -----";

            }else
                (cout << "Invalid!");
            break;

        default:
            cout << "\n----- Nomor Invalid -----";
    }
}

//function lanjut
int main () {
    char pilih;

    tampilan();
    cout << "\n\nLanjut Belanja? (y/t) : "; cin >> pilih;

    if (pilih == 'y'){
        do {
            tampilan();
            cout << "\n\nLanjut Belanja? (y/t) : "; cin >> pilih;
        }while (pilih == 'y');

        if (pilih == 't') {
            cout << "\n----- Keluar -----";
        }else
            (cout << "Invalid Karakter");

    }else if (pilih == 't') {
        cout << "\n----- Keluar -----";
    }else
        (cout << "Invalid Karakter");
}
