#include <iostream>

int main() {
    int nilaiSiswa[10] = { 75, 80, 92, 65, 88, 70, 95, 60, 85, 78 };


    int jumlahLulus = 0;
    int jumlahTidakLulus = 0;

    // manampilkan nilai siswa
    for (int i = 0; i < 10; i++) {
        std::string kriteriaNilai;
        //    memberikan nilai pada siswa
        if (nilaiSiswa[i] < 70) {
            kriteriaNilai = "D";
            jumlahTidakLulus++;
        }
        else if (nilaiSiswa[i] < 80) {
            kriteriaNilai = "C";
            jumlahLulus++;
        }
        else if (nilaiSiswa[i] < 90) {
            kriteriaNilai = "B";
            jumlahLulus++;
        }
        else {
            kriteriaNilai = "A";
            jumlahLulus++;
        }

        std::cout << "Nilai siswa ke-" << i + 1 << " adalah: " << kriteriaNilai << std::endl;

    }

    std::cout << "Jumlah Lulus: " << jumlahLulus << std::endl;
    std::cout << "Jumlah Tidak Lulus: " << jumlahTidakLulus << std::endl;

    return 0;
}