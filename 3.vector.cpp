#include <iostream>
#include <vector>
#include <string>

// ########## Implementasi dasar vector: ##########
// int main() {
//     // Vector yg menyimpan bilangan bulat (int)
//     std::vector<int> daftarAngka;

//     // Vector yg menyimpan string
//     std::vector<std::string> namaBuah = { "Apel", "Pisang", "Cari" };

//     //  Vector yg menyimpan double
//     std::vector<double> suhuHarian(7, 0.0); // outputnya: (0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
//     // suhuHarian(7, 0.0); berarti:
//     // (x, y) x = isi atau panjang nilai vector, lalu y untuk nilai default nya.
//     // jadi outputnya: (0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0)



//     return 0;
// }


// ########## Operasi Vector ##########
// menambah element "push_back()" untuk menambahkan elemen ke akhir std::vector
int main() {
    std::vector <int> daftarNilai;

    daftarNilai.push_back(75);
    daftarNilai.push_back(80);
    daftarNilai.push_back(90);

    std::cout << "hasil dari variable daftarNilai: " << daftarNilai.size() << std::endl;
    // Penjelasan: '.size()' adalah fungsi untuk mendapatkan JUMLAH ELEMEN di dalam vector.
    // Output: Ukuran vector sekarang: 3
    return 0;
}