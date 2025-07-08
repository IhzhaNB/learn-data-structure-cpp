#include <iostream>

int main() {
    int hargaBarang[4] = { 15000, 25000, 10000, 30000 }; // membuat variabel array

    // Menampilkan isi array hargaBarang
    std::cout << "Harga barang pertama" << hargaBarang[0] << std::endl;
    std::cout << "Harga barang kedua" << hargaBarang[1] << std::endl;
    std::cout << "Harga barang ketiga" << hargaBarang[2] << std::endl;
    std::cout << "Harga barang keempat" << hargaBarang[3] << std::endl;

    // mengubah array ke-2 hargaBarrang
    hargaBarang[1] = 2000;
    std::cout << "Harga barang kedua" << hargaBarang[1] << std::endl;

    // Hitung total harga barang manual
    std::cout << "total harga barang:" << hargaBarang[0] + hargaBarang[1] + hargaBarang[2] + hargaBarang[3] << std::endl;

    // Hitung total barang dengan for loop
    int totalHarga = 0;

    for (int i = 0; i < 4; i++) {
        totalHarga = totalHarga + hargaBarang[i];
    }

    std::cout << "Total Harga menggunakan for loop: " << totalHarga << std::endl;

    return 0;
}