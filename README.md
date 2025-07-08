# Data Struktur menggunakan C++

## Table Content

- [Bab 1: Algoritma](#bab-1-algoritma)
- [Bab 5 `std::vector`](#bab-5-std::vector)

## Bab 1: Algoritma

### Apa itu Algoritma? (Bukan Resep Nasi Goreng Biasa)

Bayangin kamu lagi laper banget dan pengen bikin **Nasi Goreng**. Pasti ada langkah-langkahnya, kan?

1.  Siapin bahan (nasi, bumbu, telur, dll).
2.  Panasin wajan.
3.  Tumis bumbu.
4.  Masukin nasi, aduk rata.
5.  Masukin telur.
6.  Aduk sampai matang.
7.  Sajikan.

Nah, itu dia! **Serangkaian langkah terurut** untuk mencapai tujuan (nasi goreng matang).

Di dunia komputer, **algoritma itu persis kayak resep nasi goreng**. Dia adalah **langkah-langkah pasti yang harus diikuti komputer** untuk menyelesaikan sebuah masalah. Komputer itu pinter, tapi dia _bukan_ pesulap. Dia nggak bisa mikir sendiri. Dia cuma bisa melakukan apa yang kita suruh, langkah demi langkah.

**Contoh: Algoritma Menghitung Luas Persegi Panjang**

Kita tahu rumusnya: Panjang $\times$ Lebar.
Jadi algoritmanya bisa begini:

1.  **Mulai.** (Kayak "START" di resep)
2.  **Ambil nilai Panjang.** (Kamu nanya berapa panjangnya)
3.  **Ambil nilai Lebar.** (Kamu nanya berapa lebarnya)
4.  **Kalikan Panjang dengan Lebar.** (Ini proses ngitungnya)
5.  **Tampilkan hasilnya.** (Kamu kasih tahu berapa luasnya)
6.  **Selesai.** (Kayak "SELESAI" di resep)

**Kenapa Penting?**

Kalau kamu nggak punya resep yang jelas, nasi gorengmu bisa jadi gosong, keasinan, atau malah nggak jadi sama sekali. Sama kayak program komputer. Tanpa algoritma yang jelas, programmu bisa error, hasilnya salah, atau bahkan nggak bisa jalan.

**Algoritma adalah peta jalanmu.** Dia memastikan kamu sampai ke tujuan dengan benar dan efisien.

### Latihan Singkat di Otakmu:

Coba pikirkan, gimana algoritma untuk membuat kopi susu instan? Tulis langkah-langkahnya di kepalamu atau di secarik kertas

---

## Bab 5: `std::vector`

### 5.1. Apa Itu `std::vector`?

- **Analogi:** Kalau Array biasa itu seperti **kotak kardus** yang ukurannya sudah paten, `std::vector` itu seperti **kantong belanja ajaib** yang bisa membesar atau mengecil secara otomatis sesuai barang yang kamu masukkan. Kamu nggak perlu pusing mikirin kapasitasnya di awal.
- **Intinya:** `std::vector` adalah **struktur data Array dinamis** yang disediakan oleh C++ Standard Library. "Dinamis" artinya ukurannya bisa **berubah** selama program berjalan. Kamu bisa menambah elemen, menghapus elemen, dan `std::vector` akan otomatis mengatur memori di belakang layar.

### 5.2. Kelebihan Utama `std::vector`

- **Ukuran Dinamis:** Ini adalah kelebihan utamanya. Nggak perlu pusing lagi dengan ukuran Array yang fixed.
- **Manajemen Memori Otomatis:** Kamu nggak perlu lagi khawatir tentang alokasi atau pelepasan memori. `std::vector` mengurusnya sendiri.
- **Familiar:** Cara mengakses elemennya mirip banget dengan Array biasa, pakai indeks (`[]`).

### 5.3. Cara Membuat (Mendeklarasikan) `std::vector`

Untuk menggunakan `std::vector`, kamu perlu mengimpor _library_ `<vector>`.

```cpp
#include <iostream> // Untuk std::cout
#include <vector>   // Perlu ini untuk bisa menggunakan std::vector

int main() {
    // 1. Deklarasi vector kosong (analoginya: kantong belanja kosong)
    std::vector<int> daftarAngka; // Vector ini akan menyimpan bilangan bulat (int)

    // Penjelasan:
    // - 'std::vector': Ini adalah tipe data vector.
    // - '<int>': Ini adalah 'tipe data elemen' yang akan disimpan di dalam vector.
    //            Sama seperti Array, semua elemen di vector harus punya tipe data yang sama.
    //            Kamu bisa ganti dengan 'double', 'float', 'std::string', dll.
    // - 'daftarAngka': Ini adalah nama variabel vector-mu.

    // 2. Deklarasi vector dengan nilai awal (analoginya: kantong belanja sudah ada isinya)
    std::vector<std::string> namaBuah = {"Apel", "Pisang", "Ceri"};
    // Vector 'namaBuah' ini otomatis punya 3 elemen bertipe string.

    // 3. Deklarasi vector dengan ukuran tertentu dan nilai default (opsional)
    std::vector<double> suhuHarian(7, 0.0); // Vector 'suhuHarian' punya 7 elemen, semua diisi 0.0
                                         // (mirip Array [7] = {0.0, 0.0, ...})

    return 0;
}
```

### 5.4. Operasi Penting pada `std::vector`

#### a. Menambah Elemen (`push_back()`)

Ini adalah cara paling umum untuk menambahkan elemen ke akhir `std::vector`.

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> daftarNilai; // Vector kosong

    daftarNilai.push_back(75); // Menambahkan 75 ke akhir vector
    // daftarNilai sekarang: {75}

    daftarNilai.push_back(88); // Menambahkan 88 ke akhir vector
    // daftarNilai sekarang: {75, 88}

    daftarNilai.push_back(92); // Menambahkan 92 ke akhir vector
    // daftarNilai sekarang: {75, 88, 92}

    std::cout << "Ukuran vector sekarang: " << daftarNilai.size() << std::endl;
    // Penjelasan: '.size()' adalah fungsi untuk mendapatkan JUMLAH ELEMEN di dalam vector.
    // Output: Ukuran vector sekarang: 3

    return 0;
}
```

#### b. Mengakses Elemen (dengan Indeks `[]`)

Sama seperti Array biasa, kamu bisa mengakses elemen `std::vector` menggunakan indeks. Ingat, indeks dimulai dari `0`\!

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> daftarProduk = {"Laptop", "Mouse", "Keyboard"};

    std::cout << "Produk pertama: " << daftarProduk[0] << std::endl; // Output: Laptop
    std::cout << "Produk kedua: " << daftarProduk[1] << std::endl;  // Output: Mouse

    // Mengubah nilai elemen (sama seperti Array)
    daftarProduk[1] = "Speaker";
    std::cout << "Produk kedua setelah diubah: " << daftarProduk[1] << std::endl; // Output: Speaker

    return 0;
}
```

- **Penting:** Jika kamu mencoba mengakses indeks yang _di luar batas_ (`daftarProduk[5]` padahal hanya ada 3 elemen), C++ tidak akan memberikan error langsung saat kompilasi, tapi akan **error saat program berjalan (runtime error)**. Ini penting untuk selalu memastikan indeks yang kamu pakai itu valid.

#### c. Menghapus Elemen (`pop_back()`, `erase()`)

- **`pop_back()`**: Menghapus elemen terakhir dari vector. Cepat dan mudah.
- **`erase()`**: Menghapus elemen pada posisi (indeks) tertentu, atau rentang elemen. Ini lebih lambat karena semua elemen setelahnya harus "bergeser".

<!-- end list -->

```cpp
#include <iostream>
#include <vector>
#include <string> // Untuk std::string

int main() {
    std::vector<int> angka = {10, 20, 30, 40, 50};

    std::cout << "Vector awal: ";
    for (int i = 0; i < angka.size(); i++) { // Gunakan .size() untuk loop
        std::cout << angka[i] << " ";
    }
    std::cout << std::endl; // Output: Vector awal: 10 20 30 40 50

    // Menggunakan pop_back() - menghapus elemen terakhir
    angka.pop_back(); // Menghapus 50
    std::cout << "Setelah pop_back(): ";
    for (int i = 0; i < angka.size(); i++) {
        std::cout << angka[i] << " ";
    }
    std::cout << std::endl; // Output: Setelah pop_back(): 10 20 30 40

    // Menggunakan erase() - menghapus elemen pada indeks tertentu
    // Untuk menghapus '20' (yang ada di indeks 1)
    angka.erase(angka.begin() + 1); // Penjelasan 'angka.begin() + 1' akan di bahas lain waktu
                                   // Untuk sekarang, anggap ini cara untuk 'indeks ke-1'
    std::cout << "Setelah erase (indeks 1): ";
    for (int i = 0; i < angka.size(); i++) {
        std::cout << angka[i] << " ";
    }
    std::cout << std::endl; // Output: Setelah erase (indeks 1): 10 30 40

    return 0;
}
```

- **Catatan `erase()`:** `angka.begin()` itu seperti "penunjuk" ke awal `std::vector`. `+ 1` berarti "satu posisi setelah awal", yaitu indeks `1`. Kita akan bahas "penunjuk" ini lebih detail di bab Pointer nanti. Untuk sekarang, fokus pada fungsinya: menghapus elemen.

---

### Perbandingan Cepat: Array Biasa vs. `std::vector`

| Fitur                  | Array Biasa (`int arr[5]`)                    | `std::vector` (`std::vector<int> vec`)            |
| :--------------------- | :-------------------------------------------- | :------------------------------------------------ |
| **Ukuran**             | Tetap (fixed), ditentukan saat kompilasi.     | Dinamis, bisa berubah saat program berjalan.      |
| **Manajemen Memori**   | Manual oleh programmer.                       | Otomatis oleh C++.                                |
| **Menambah/Menghapus** | Sulit, harus membuat Array baru dan menyalin. | Mudah, ada fungsi bawaan seperti `push_back()`.   |
| **Akses Elemen**       | Cepat, pakai `arr[indeks]`.                   | Cepat, pakai `vec[indeks]` atau `vec.at(indeks)`. |
| **Penggunaan**         | Ketika ukuran data sudah pasti.               | Ketika ukuran data bisa berubah-ubah.             |

---
