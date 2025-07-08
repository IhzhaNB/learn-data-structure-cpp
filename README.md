# Data Struktur menggunakan C++

## Table Content

- [Bab 1: Algoritma](#bab-1-algoritma)
- [Bab 2: Array](#bab-2-array)
- [Bab 3: Algoritma Perulangan](#bab-3-algoritma-perulangan)
- [Bab 4: Pengambilan Keputusan dan Pencarian Data](#bab-4-pengambilan-keputusan-dan-pencarian-data)
- [Bab 5: `std::vector`](#bab-5)

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

## Bab 2: Array

### 2.1. Mempersiapkan Dapur C++ (Dasar-Dasar yang Perlu Kamu Tahu)

Sebelum kita menyelam ke Array, ada beberapa hal dasar yang perlu kamu tahu tentang C++:

#### a. Kompilasi: Si Penerjemah Kode

Berbeda dengan resep nasi goreng yang bisa langsung kamu baca dan ikuti, kode C++ itu seperti resep yang ditulis dalam bahasa kuno. Komputer nggak langsung ngerti. Dia butuh **"penerjemah"** yang namanya **Compiler**.

- **Tugas Compiler:** Menerjemahkan kode C++ yang kamu tulis (disebut _source code_) menjadi bahasa yang bisa dimengerti dan dijalankan oleh komputer (disebut _executable file_).
- **Analogi:** Kamu nulis resep dalam bahasa Jawa kuno. Compiler itu kayak ahli bahasa yang menerjemahkan resep itu ke bahasa Indonesia modern biar kamu bisa langsung masak.

#### b. Struktur Dasar Program C++: Kerangka Resepmu

Setiap program C++ punya kerangka dasar seperti ini:

```cpp
#include <iostream> // Baris ini disebut 'preprocessor directive'
                    // Ini seperti 'mengimpor' buku resep standar untuk input/output.

int main() {        // Ini adalah 'fungsi utama' atau 'main function'
                    // Di sinilah programmu akan mulai berjalan.
                    // Anggap ini sebagai 'START' dari resepmu.

    // Di sini kamu akan menulis langkah-langkah algoritma dan kode C++-mu.
    // Setiap perintah diakhiri dengan titik koma (;).

    return 0;       // Baris ini disebut 'return statement'
                    // Ini memberitahu sistem operasi bahwa programmu selesai berjalan dengan sukses.
                    // Anggap ini sebagai 'END' dari resepmu.
}
```

- **`#include <iostream>`:** Ini adalah perintah untuk "memasukkan" atau "mengimpor" sebuah pustaka standar C++ yang bernama `iostream`. Pustaka ini berisi alat-alat dasar untuk melakukan **input** (menerima masukan dari pengguna, seperti mengetik angka) dan **output** (menampilkan sesuatu ke layar, seperti hasil perhitungan).
  - **Istilah:** `iostream` adalah singkatan dari **Input/Output Stream**.
- **`int main() { ... }`:** Ini adalah **fungsi utama** dari setiap program C++. Setiap program C++ harus punya fungsi `main()`. Ketika kamu menjalankan program, komputer akan selalu mencari dan mulai menjalankan kode dari dalam fungsi `main()`. Kata `int` di depannya berarti fungsi ini akan mengembalikan nilai berupa bilangan bulat (integer), dan `0` di `return 0;` menunjukkan bahwa program berjalan tanpa error.
  - **Istilah:** `main()` adalah **fungsi utama**, `int` adalah **tipe data integer**.
- **`// ...`:** Ini adalah **komentar**. Teks setelah `//` tidak akan dibaca oleh compiler. Ini cuma catatan buat kamu atau programmer lain untuk menjelaskan kode.

#### c. Variabel: Kotak Penyimpanan Data

Dalam algoritma, kita sering "menyimpan" nilai, misalnya "simpan nilai Panjang". Dalam C++, kita pakai **variabel** untuk ini.

- **Analogi:** Variabel itu seperti **kotak kosong** yang bisa kamu isi dengan sesuatu. Setiap kotak punya **nama** (misalnya `panjang`, `lebar`) dan hanya bisa diisi **jenis barang tertentu** (misalnya, cuma bisa diisi angka bulat, atau cuma bisa diisi teks).
- **Deklarasi Variabel:** Kamu harus memberi tahu C++ jenis data apa yang akan disimpan di kotak itu.
  - `int angka;` // Ini mendeklarasikan kotak bernama `angka` yang hanya bisa diisi **bilangan bulat** (integer).
  - `double harga;` // Ini mendeklarasikan kotak bernama `harga` yang bisa diisi **bilangan desimal** (double).
  - `char huruf;` // Ini mendeklarasikan kotak bernama `huruf` yang bisa diisi **satu karakter** (character).
  - `std::string nama;` // Ini mendeklarasikan kotak bernama `nama` yang bisa diisi **teks/kalimat** (string). (Untuk `std::string`, kamu perlu `#include <string>` juga).

### 2.2. Array: Rak Berjejer Nomor

Sekarang, mari kita masuk ke **Array**.

- **Analogi:** Ingat rak sepatu yang setiap kotaknya punya nomor urut? Array itu persis seperti itu. Ini adalah **kumpulan kotak penyimpanan data yang berjejer dan punya nomor urut**.
- **Kenapa Butuh Array?** Bayangkan kamu mau menyimpan nilai ujian 50 siswa. Kalau pakai variabel biasa, kamu harus bikin `nilaiSiswa1`, `nilaiSiswa2`, ..., sampai `nilaiSiswa50`. Repot, kan? Dengan Array, kamu cukup bikin satu Array bernama `nilaiSiswa`, dan dia bisa menampung 50 nilai sekaligus.

#### Cara Kerja Array:

- **Nomor Urut (Indeks):** Setiap "kotak" di Array punya nomor urutnya sendiri, yang disebut **indeks**. Yang penting diingat: **indeks di C++ (dan kebanyakan bahasa pemrograman) selalu dimulai dari NOL (0)\!**
  - Jadi, kalau Array punya 5 kotak, indeksnya adalah 0, 1, 2, 3, 4.
- **Tipe Data Sama:** Semua kotak dalam satu Array harus menyimpan **jenis data yang sama**. Kalau Array-mu untuk angka bulat, semua kotaknya harus angka bulat.

#### Membuat (Mendeklarasikan) Array di C++:

```cpp
// Ini adalah contoh bagaimana mendeklarasikan (membuat) sebuah Array di C++
// yang bisa menyimpan 5 buah bilangan bulat.

int nilaiUjian[5]; // Ini disebut 'deklarasi Array'

// Penjelasan:
// - 'int': Ini adalah 'tipe data' yang akan disimpan di Array.
//          Artinya, Array ini hanya bisa menyimpan bilangan bulat (integer).
// - 'nilaiUjian': Ini adalah 'nama Array'-nya. Kamu bisa kasih nama apa saja.
// - '[5]': Ini adalah 'ukuran Array'-nya. Angka 5 berarti Array ini punya 5 kotak
//          untuk menyimpan data.
//          Karena indeks dimulai dari 0, kotak-kotaknya akan bernomor 0, 1, 2, 3, 4.
```

#### Mengisi dan Mengambil Data dari Array:

```cpp
#include <iostream> // Untuk input/output
#include <string>   // Untuk tipe data string (kalau mau pakai)

int main() {
    // 1. Deklarasi Array (membuat rak dengan 5 kotak untuk angka bulat)
    int nilaiUjian[5]; // Nama Array: nilaiUjian, Ukuran: 5 kotak

    // 2. Mengisi Data ke dalam Array (menaruh sepatu ke dalam kotak)
    //    Kita mengakses kotak menggunakan indeksnya (nomor urutnya).
    //    Ingat, indeks dimulai dari 0!

    nilaiUjian[0] = 85; // Mengisi kotak indeks ke-0 dengan nilai 85
    nilaiUjian[1] = 90; // Mengisi kotak indeks ke-1 dengan nilai 90
    nilaiUjian[2] = 78; // Mengisi kotak indeks ke-2 dengan nilai 78
    nilaiUjian[3] = 92; // Mengisi kotak indeks ke-3 dengan nilai 92
    nilaiUjian[4] = 88; // Mengisi kotak indeks ke-4 dengan nilai 88

    // 3. Mengambil Data dari Array (mengambil sepatu dari kotak)
    //    Untuk melihat isi kotak, kita juga pakai indeksnya.

    std::cout << "Nilai ujian siswa pertama (indeks 0): " << nilaiUjian[0] << std::endl;
    // Penjelasan:
    // - 'std::cout': Ini adalah perintah untuk 'menampilkan sesuatu ke layar'.
    //                Ini bagian dari pustaka 'iostream' yang kita include di atas.
    // - '<<': Ini adalah 'operator insertion' atau 'operator sisipkan'.
    //         Dia "menyisipkan" apa yang ada di kanannya ke 'std::cout' untuk ditampilkan.
    // - '"..."': Teks di dalam tanda kutip ganda akan ditampilkan persis seperti itu.
    // - 'nilaiUjian[0]': Ini adalah 'nilai' yang ada di kotak Array 'nilaiUjian' pada indeks ke-0.
    // - 'std::endl': Ini adalah perintah untuk 'pindah baris' (End Line),
    //                mirip seperti menekan tombol Enter.

    std::cout << "Nilai ujian siswa ketiga (indeks 2): " << nilaiUjian[2] << std::endl;

    // 4. Mengubah Data di Array (mengganti isi kotak)
    //    Kita bisa mengubah nilai yang sudah ada di dalam kotak.

    nilaiUjian[2] = 80; // Mengubah nilai di kotak indeks ke-2 dari 78 menjadi 80
    std::cout << "Nilai ujian siswa ketiga setelah diubah: " << nilaiUjian[2] << std::endl;

    return 0; // Program selesai dengan sukses
}
```

**Simulasi Kode ini (Apa yang Akan Terjadi Jika Dijalankan):**

1.  Program akan membuat "rak" bernama `nilaiUjian` dengan 5 kotak kosong.
2.  Lalu, kotak-kotak itu akan diisi dengan angka 85, 90, 78, 92, 88 secara berurutan.
3.  Program akan menampilkan kalimat "Nilai ujian siswa pertama (indeks 0): " diikuti oleh angka 85.
4.  Lalu menampilkan "Nilai ujian siswa ketiga (indeks 2): " diikuti oleh angka 78.
5.  Kemudian, nilai di kotak indeks ke-2 (yang tadinya 78) akan diubah jadi 80.
6.  Terakhir, program akan menampilkan "Nilai ujian siswa ketiga setelah diubah: " diikuti oleh angka 80.

---

### Task untuk Bab 2: Array

Baiklah, sebelum kita bergerak maju, ini Task pertamamu:

**Task:**

1.  **Buat Program C++ Baru:** Buka _text editor_ atau _IDE_ (Integrated Development Environment) yang kamu pakai (kalau belum punya, pakai **Visual Studio Code** dengan ekstensi C/C++ itu pilihan bagus, atau **repl.it** untuk online).
2.  **Deklarasikan Array:** Buatlah sebuah **Array** bernama `hargaBarang` yang bisa menampung **4** buah harga barang (bilangan bulat).
3.  **Inisialisasi Langsung:** Isi Array tersebut langsung saat kamu mendeklarasikannya dengan harga-harga berikut: `15000`, `25000`, `10000`, `30000`.
4.  **Tampilkan Harga Spesifik:** Tampilkan ke layar (menggunakan `std::cout`) **harga barang kedua** (ingat indeks dimulai dari berapa?) dan **harga barang terakhir** di Array tersebut.
5.  **Ubah Harga:** Ubah harga barang kedua (yang tadi kamu tampilkan) menjadi `20000`.
6.  **Tampilkan Lagi:** Tampilkan kembali harga barang kedua setelah diubah, untuk memastikan perubahannya berhasil.
7.  **Tambahkan Komentar:** Pastikan setiap baris kode penting atau bagian yang menurutmu perlu penjelasan, kamu kasih **komentar** (diawali `//`). Ini membantu kamu sendiri mengingat dan orang lain memahami kodemu.

**Contoh Struktur Kode yang Bisa Kamu Ikuti:**

```cpp
#include <iostream>

int main() {
    // Tulis kodemu di sini
    // ...

    return 0;
}
```

---

## Bab 3: Algoritma Perulangan

### Kenapa Perulangan Penting?

- **Analogi:** Bayangkan kamu disuruh menyiram 100 tanaman. Kamu bisa menyiram satu per satu, pindah ke tanaman berikutnya, dan terus begitu sampai selesai. Atau, kamu bisa pakai sistem yang memungkinkanmu mengulang tindakan "menyiram" untuk setiap tanaman secara otomatis.
- **Dalam Pemrograman:** Perulangan adalah instruksi yang memungkinkan kita mengulang satu atau lebih baris kode berkali-kali sampai kondisi tertentu terpenuhi. Ini sangat efisien untuk tugas-tugas yang berulang, seperti:
  - Membaca semua data dari sebuah daftar.
  - Menampilkan semua elemen Array.
  - Menghitung total dari banyak angka.
  - Mencari sebuah nilai di antara banyak data.

### Jenis Perulangan yang Umum (di C++)

Ada beberapa jenis perulangan di C++, tapi yang paling umum dan akan sering kita gunakan adalah:

1.  **`for` Loop (Perulangan "Untuk"):**

    - Digunakan ketika kamu **tahu pasti berapa kali** perulangan akan dilakukan (misalnya, untuk setiap elemen di Array).
    - **Analogi:** "Untuk setiap tanaman (dari 1 sampai 100), siramlah\!"

2.  **`while` Loop (Perulangan "Selama"):**

    - Digunakan ketika kamu **tidak tahu pasti berapa kali** perulangan akan dilakukan, tapi perulangan akan terus berjalan **selama suatu kondisi masih benar**.
    - **Analogi:** "Selama masih ada air di ember, terus siram tanaman\!"

Kita akan fokus pada `for` loop dulu karena sangat cocok untuk kasus Array yang sudah jelas ukurannya.

### Mengenal `for` Loop di C++

Struktur dasar `for` loop terlihat seperti ini:

```cpp
for (inisialisasi; kondisi; perubahan) {
    // Kode yang akan diulang di sini
}
```

Mari kita pecah satu per satu:

- **`inisialisasi`**: Ini adalah bagian yang dijalankan **satu kali di awal** perulangan. Biasanya digunakan untuk membuat variabel penghitung (misalnya `int i = 0;`).
- **`kondisi`**: Ini adalah ekspresi yang **diperiksa setiap kali sebelum perulangan dijalankan**. Jika kondisinya `true` (benar), perulangan berlanjut. Jika `false` (salah), perulangan berhenti.
- **`perubahan`**: Ini adalah bagian yang dijalankan **setiap kali setelah satu putaran perulangan selesai**. Biasanya digunakan untuk mengubah nilai variabel penghitung (misalnya `i++` yang berarti `i = i + 1`).

#### Contoh `for` Loop: Menampilkan Angka 0 Sampai 4

```cpp
#include <iostream>

int main() {
    // Ini adalah 'for' loop
    // Tujuan: Menampilkan angka dari 0 sampai 4

    for (int i = 0; i < 5; i++) {
        // Penjelasan setiap bagian 'for' loop:
        // 1. int i = 0;   -> Inisialisasi: Membuat variabel 'i' (indeks/penghitung) dan mengaturnya mulai dari 0.
        //                     Ini hanya dilakukan sekali di awal.
        // 2. i < 5;      -> Kondisi: Perulangan akan terus berjalan selama nilai 'i' KURANG DARI 5.
        //                     Ketika 'i' mencapai 5, kondisi ini menjadi false, dan perulangan berhenti.
        // 3. i++        -> Perubahan: Setelah setiap putaran, nilai 'i' akan ditambah 1.
        //                     (i++ adalah singkatan dari i = i + 1)

        std::cout << "Angka saat ini: " << i << std::endl; // Kode ini akan diulang 5 kali
    }

    return 0;
}
```

**Bagaimana Program Ini Bekerja:**

1.  `i` dimulai dari `0`.
2.  Cek kondisi: `0 < 5`? Ya (True).
3.  Tampilkan "Angka saat ini: 0".
4.  `i` jadi `1` (`i++`).
5.  Cek kondisi: `1 < 5`? Ya (True).
6.  Tampilkan "Angka saat ini: 1".
7.  `i` jadi `2`.
8.  Cek kondisi: `2 < 5`? Ya (True).
9.  Tampilkan "Angka saat ini: 2".
10. `i` jadi `3`.
11. Cek kondisi: `3 < 5`? Ya (True).
12. Tampilkan "Angka saat ini: 3".
13. `i` jadi `4`.
14. Cek kondisi: `4 < 5`? Ya (True).
15. Tampilkan "Angka saat ini: 4".
16. `i` jadi `5`.
17. Cek kondisi: `5 < 5`? Tidak (False). **Perulangan berhenti.**

### Menjumlahkan Elemen Array dengan `for` Loop

Nah, sekarang kita terapkan ini ke masalahmu: menjumlahkan semua elemen Array agar tidak perlu menulis satu per satu\!

```cpp
#include <iostream>

int main() {
    int hargaBarang[] = {15000, 25000, 10000, 30000}; // Array harga barang
    // Ukuran Array ini adalah 4, indeksnya dari 0 sampai 3

    int totalHarga = 0; // Variabel untuk menyimpan total harga, dimulai dari 0.
                        // Ini disebut 'akumulator'.

    // Perulangan 'for' untuk mengakses setiap elemen Array
    // 'i' akan berjalan dari 0 (indeks pertama) sampai 3 (indeks terakhir)
    for (int i = 0; i < 4; i++) { // Kenapa 'i < 4'? Karena indeks terakhir adalah 3.
                                 // Kalau 'i' sudah 4, artinya sudah di luar batas Array.

        totalHarga = totalHarga + hargaBarang[i];
        // Penjelasan baris di atas:
        // Setiap kali perulangan, nilai 'hargaBarang' pada indeks 'i' saat itu
        // akan ditambahkan ke 'totalHarga'.
        // Contoh:
        // - Putaran 1 (i=0): totalHarga = 0 + hargaBarang[0] (15000) = 15000
        // - Putaran 2 (i=1): totalHarga = 15000 + hargaBarang[1] (25000) = 40000
        // - Putaran 3 (i=2): totalHarga = 40000 + hargaBarang[2] (10000) = 50000
        // - Putaran 4 (i=3): totalHarga = 50000 + hargaBarang[3] (30000) = 80000
    }

    std::cout << "Total harga barang keseluruhan: " << totalHarga << std::endl;

    return 0;
}
```

Lihat kan, seberapa ringkas dan powerfulnya `for` loop ini? Tidak peduli Array-nya berisi 4 atau 4 juta elemen, kode `for` loop-nya akan tetap sama ringkasnya\!

---

### Task 3: Menggunakan Perulangan dengan Array

Sekarang, mari kita buktikan pemahamanmu dengan Task ini. Ini adalah kombinasi dari semua yang sudah kita pelajari:

**Task:**

1.  **Buat Program C++ Baru:** Siapkan file `.cpp` kosong.
2.  **Deklarasi Array:** Buatlah sebuah **Array** bernama `suhuHarian` yang bisa menampung **7** nilai suhu (gunakan tipe data `double` agar bisa menyimpan angka desimal).
3.  **Inisialisasi Langsung:** Isi `suhuHarian` langsung saat deklarasi dengan nilai-nilai berikut: `25.5`, `27.0`, `26.3`, `28.1`, `25.9`, `26.8`, `27.5`.
4.  **Tampilkan Semua Suhu:** Gunakan **`for` loop** untuk menampilkan **setiap nilai suhu** di dalam Array `suhuHarian` ke layar, lengkap dengan indeksnya.
    - Contoh _output_ yang diharapkan:
      ```
      Suhu Hari ke-0: 25.5
      Suhu Hari ke-1: 27.0
      ...dst...
      ```
5.  **Hitung Rata-rata Suhu:** Setelah loop pertama, tambahkan kode untuk **menghitung rata-rata** dari semua suhu yang ada di Array. Kamu akan butuh satu variabel baru untuk menyimpan **total suhu** (mirip seperti `totalHarga` tadi) dan satu variabel lagi untuk menyimpan **rata-ratanya**.
    - Ingat rumus rata-rata: `Total Suhu / Jumlah Hari`.
    - Pastikan pembagiannya menghasilkan nilai desimal (karena `double`).
6.  **Tampilkan Rata-rata:** Tampilkan hasil rata-rata suhu tersebut ke layar.
7.  **Tambahkan Komentar:** Jangan lupa sertakan komentar di setiap bagian kode penting\!

---

## Bab 4: Pengambilan Keputusan dan Pencarian Data

### 4.1. Percabangan `if-else`: Komputer Bisa Memilih\!

Sebelumnya, program kita selalu berjalan lurus, langkah demi langkah. Tapi di dunia nyata, seringkali ada pilihan. Misalnya, "kalau hujan, bawa payung; kalau tidak, bawa kacamata hitam."

Dalam pemrograman, ini disebut **percabangan** atau **kondisional**, dan kita menggunakan pernyataan `if` dan `else`.

- **Analogi:** `if` itu seperti "Jika... maka lakukan ini". `else` itu seperti "Jika tidak (kondisi `if` tidak terpenuhi)... maka lakukan yang lain".

**Struktur Dasar `if-else`:**

```cpp
if (kondisi_yang_diperiksa) {
    // Kode ini akan dijalankan JIKA kondisi_yang_diperiksa TRUE (BENAR)
} else {
    // Kode ini akan dijalankan JIKA kondisi_yang_diperiksa FALSE (SALAH)
}
```

- **`kondisi_yang_diperiksa`**: Ini adalah ekspresi yang menghasilkan nilai `true` atau `false`. Contohnya:
  - `angka > 10` (apakah angka lebih besar dari 10?)
  - `nama == "Budi"` (apakah nama sama dengan "Budi"?) - Perhatikan `==` untuk membandingkan kesamaan, bukan `=` untuk penugasan\!
  - `sisa_buku <= 0` (apakah sisa buku kurang dari atau sama dengan 0?)

#### Contoh `if-else` di C++: Menentukan Bilangan Ganjil/Genap

```cpp
#include <iostream>

int main() {
    int angka = 7; // Deklarasi dan inisialisasi variabel angka

    // Memeriksa apakah 'angka' adalah bilangan genap atau ganjil
    // Bilangan genap adalah bilangan yang sisa baginya dengan 2 adalah 0
    if (angka % 2 == 0) { // '%' adalah operator 'modulo' atau 'sisa bagi'
                          // Jadi, 'angka % 2 == 0' artinya 'apakah sisa bagi angka dengan 2 adalah 0?'
        std::cout << angka << " adalah bilangan Genap." << std::endl;
    } else { // Jika kondisi di atas (angka % 2 == 0) FALSE, maka masuk ke blok 'else' ini
        std::cout << angka << " adalah bilangan Ganjil." << std::endl;
    }

    // Kamu bisa coba ganti nilai 'angka' menjadi 10, lalu kompilasi dan jalankan lagi!

    return 0;
}
```

### 4.2. Menggabungkan Array, Perulangan, dan Percabangan: Mencari Data\!

Sekarang kita akan gabungkan semua yang sudah kita pelajari: Array, `for` loop, dan `if-else` untuk melakukan tugas yang lebih kompleks: **mencari sebuah nilai di dalam Array.**

- **Algoritma Pencarian Sederhana (Linear Search):**
  1.  Mulai dari elemen pertama Array.
  2.  Periksa setiap elemen satu per satu.
  3.  Jika elemen saat ini adalah nilai yang dicari, maka berhenti dan laporkan bahwa nilai ditemukan (dan di indeks berapa).
  4.  Jika sudah sampai di akhir Array dan nilai tidak ditemukan, laporkan bahwa nilai tidak ada.

#### Contoh Kode C++: Mencari Angka di Array

```cpp
#include <iostream> // Untuk input/output

int main() {
    // Array dengan beberapa angka
    int dataAngka[] = {10, 5, 20, 15, 25, 8};
    int ukuranArray = 6; // Karena ada 6 elemen
    int angkaYangDicari = 15; // Angka yang ingin kita cari

    bool ditemukan = false; // Variabel 'boolean' untuk menandai apakah angka ditemukan.
                           // 'bool' hanya bisa berisi 'true' atau 'false'.
    int indeksDitemukan = -1; // Menyimpan indeks di mana angka ditemukan.
                             // -1 sering dipakai untuk menandakan 'tidak ditemukan'.

    // Loop 'for' untuk memeriksa setiap elemen di Array
    for (int i = 0; i < ukuranArray; i++) { // Loop dari indeks 0 sampai sebelum ukuranArray
        // Gunakan 'if' untuk memeriksa apakah elemen saat ini sama dengan angka yang dicari
        if (dataAngka[i] == angkaYangDicari) { // '==' adalah operator perbandingan "sama dengan"
            ditemukan = true;        // Jika sama, set 'ditemukan' jadi true
            indeksDitemukan = i;     // Simpan indeks di mana ditemukan
            break;                   // 'break' adalah perintah untuk MENGHENTIKAN perulangan SEKETIKA
                                     // (karena kita sudah menemukan angkanya, tidak perlu cek sisanya)
        }
    }

    // Setelah perulangan selesai, periksa apakah angka ditemukan atau tidak
    if (ditemukan == true) { // Bisa juga ditulis 'if (ditemukan)' karena 'true' itu sendiri adalah kondisi benar
        std::cout << "Angka " << angkaYangDicari << " DITEMUKAN pada indeks: " << indeksDitemukan << std::endl;
    } else {
        std::cout << "Angka " << angkaYangDicari << " TIDAK DITEMUKAN di dalam Array." << std::endl;
    }

    return 0;
}
```

---

### Task 4

**Task Beratmu:**

1.  **Buat Program C++ Baru.**
2.  **Deklarasi Array:** Buatlah sebuah **Array** bernama `nilaiSiswa` yang menampung **10** nilai ujian siswa (gunakan tipe data `int`). Inisialisasikan Array ini dengan nilai acak apa saja (misal: `75, 80, 92, 65, 88, 70, 95, 60, 85, 78`).
3.  **Tampilkan Semua Nilai dan Predikat:**
    - Gunakan **`for` loop** untuk mengiterasi (melalui) setiap nilai di `nilaiSiswa`.
    - Di dalam loop, untuk setiap nilai, gunakan **`if-else if-else`** (kamu bisa menambah `else if` untuk kondisi tengah) untuk menentukan predikatnya dan tampilkan:
      - Jika nilai `>= 90`: Tampilkan `Nilai X (indeks Y): A`
      - Jika nilai `>= 80` dan `< 90`: Tampilkan `Nilai X (indeks Y): B`
      - Jika nilai `>= 70` dan `< 80`: Tampilkan `Nilai X (indeks Y): C`
      - Selain itu (nilai `< 70`): Tampilkan `Nilai X (indeks Y): D`
    - **Contoh Output Bagian Ini:**
      ```
      Nilai 75 (indeks 0): C
      Nilai 80 (indeks 1): B
      ...dst...
      ```
4.  **Hitung Jumlah Lulus dan Tidak Lulus:**
    - Buat dua variabel baru: `jumlahLulus` (tipe `int`, inisialisasi `0`) dan `jumlahTidakLulus` (tipe `int`, inisialisasi `0`).
    - **Di dalam `for` loop yang sama** (atau kamu bisa pakai loop baru kalau mau), tambahkan logika `if-else` untuk memeriksa apakah setiap nilai siswa **Lulus** (misalnya, jika nilai `>= 70`) atau **Tidak Lulus** (jika nilai `< 70`).
    - Setiap kali seorang siswa lulus, tambahkan 1 ke `jumlahLulus`. Setiap kali tidak lulus, tambahkan 1 ke `jumlahTidakLulus`.
5.  **Tampilkan Rekapitulasi:** Setelah loop selesai, tampilkan ke layar:
    - `Jumlah Siswa Lulus: X`
    - `Jumlah Siswa Tidak Lulus: Y`
6.  **Komentar:** Seperti biasa, tambahkan komentar di setiap bagian penting kodemu.

---

## Bab 5

`std::vector`

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

---

Paham banget! Kamu mau Task yang langsung to-the-point, fokus ke inti masalahnya, tanpa terlalu banyak panduan langkah demi langkah atau instruksi spesifik variabel. Kamu mau tantangan nyata untuk menerapkan pemahamanmu.

Oke, kalau begitu, ini dia **Task Bab 5** untukmu. Ini akan menguji pemahamanmu tentang `std::vector` dan juga mengasah kemampuanmu untuk merancang variabel dan struktur logikanya sendiri.

---

### Task 5:

Bayangkan kamu sedang membuat aplikasi daftar belanja sederhana. Kamu tidak tahu pasti berapa banyak barang yang akan orang masukkan, dan mereka mungkin ingin menambahkan atau menghapus barang kapan saja.

1.  Buat program C++ yang menggunakan **`std::vector`** untuk menyimpan daftar nama-nama barang belanjaan (gunakan tipe data `std::string`).
2.  Saat program dimulai, **inisialisasikan `std::vector` tersebut dalam keadaan kosong**.
3.  Implementasikan fitur untuk **menambahkan 3 nama barang belanjaan** secara berurutan ke dalam daftar. Bebas mau nama barang apa saja.
4.  Implementasikan fitur untuk **menghapus barang kedua** dari daftar.
5.  Setelah penambahan dan penghapusan, **tampilkan semua barang yang tersisa** di daftar belanjaan ke layar. Pastikan setiap barang ditampilkan di baris baru.
6.  Terakhir, tampilkan juga **jumlah total barang** yang ada di daftar setelah semua operasi.

---
