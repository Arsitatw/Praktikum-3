# <h1 align="center">Laporan Praktikum Modul Sorting</h1>
<p align="center">Arsita Wiwit Tiyaswening</p>
<p align="center">2311110028</p>

## Dasar Teori
Sorting atau pengurutan adalah proses menyusun data dalam urutan tertentu, baik menaik (ascending) maupun menurun (descending). Ascending adalah pengurutan dari terkecil hingga terbesar. Contoh: 1, 2, 3, 4, 5. Sedangkan descending adalah pengurutan dari nilai terbesar hingga terkecil. Contoh: 5, 4, 3, 2, 1 Sorting memudahkan dalam pencarian, pemrosesan, dan analisis data. Ada berbagai algoritma sorting, masing-masing dengan karakteristik dan efisiensi berbeda. Berikut adalah beberapa algoritma sorting umum:

### 1. Bubble Sort
   Bubble Sort adalah salah satu algoritma sorting yang paling sederhana dan mudah dipahami. Proses pengurutannya dilakukan dengan cara membandingkan elemen-elemen yang bersebelahan dan menukarnya jika mereka berada dalam urutan yang salah. Proses ini diulang hingga tidak ada lagi elemen yang perlu ditukar. Kompleksitas waktu: O(n^2)
   
### 2. Selection Sort
   Selection Sort adalah algoritma pengurutan yang bekerja dengan cara membagi array menjadi dua bagian: bagian yang sudah diurutkan dan bagian yang belum diurutkan. Algoritma ini secara berulang mencari elemen terkecil (atau terbesar, tergantung urutan) dari bagian yang belum diurutkan dan menukarnya dengan elemen pertama dari bagian yang belum diurutkan. Kompleksitas waktu: O(n^2)
   
### 3. Insertion Sort
   Insertion Sort adalah algoritma pengurutan yang bekerja dengan cara membangun array yang sudah diurutkan satu per satu. Ini dimulai dengan elemen pertama, yang dianggap sebagai array yang sudah diurutkan, dan memasukkan elemen berikutnya ke posisi yang tepat di array yang sudah diurutkan tersebut. Kompleksitas waktu: O(n^2)

## Guided
### 1. Mengurutkan secara ascending untuk data numerik bertipe double menggunakan Algoritma Bubble Sort
```C++
#include <iostream>
using namespace std;

void bubble_sort(double arr[], int length){
    bool not_sorted = true;
    int j=0;
    double tmp;

    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }//end of if
        }//end of for loop
    }//end of while loop
}//end of bubble_sort

void print_array(double a[], int length) {
    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    
    int length = 5;
    double a[] = {22.1, 15.3, 8.2, 33.21, 99,99};
    
    cout << "Urutan bilangan sebelum sorting: " << endl;
    print_array(a, length);
    
    bubble_sort(a, length);
    
    cout << "\nUrutan bilangan setelah sorting: " << endl;
    print_array(a, length);
}
```
### 2. Mengurutkan karakter secara descending (dari terbesar hingga terkecil) menggunakan Algoritma Insertion Sort
```C++
#include <iostream>
using namespace std;

void insertion_sort(char arr[], int length) {
    int i, j;
    char tmp;
    for (i = 1; i < length; i++) {
        j = i;
        while (j > 0 && arr[j - 1] < arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }//end of while loop
    } //end of for loop
}

void print_array(char a[], int length) {
    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}
int main() {
    int length = 6;
    char a[length] = {'c', 'f', 'a', 'z', 'd', 'p'};
    cout << "Urutan karakter sebelum sorting: " << endl;
    print_array(a, length);
    insertion_sort(a, length);
    cout << "\nUrutan karakter setelah sorting: " << endl;
    print_array(a, length);
}
```
## Unguided 
### 1. Buatlah program untuk Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerima lembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma Selection Sort!
```C++
#include <iostream>
using namespace std;

void selectionSortDesc(float arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIdx]) {
                maxIdx = j;
            }
        }
        float temp = arr[maxIdx];
        arr[maxIdx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    float ips[] = {3.8, 2.9, 3.3, 4.0, 2.4};
    int n = sizeof(ips) / sizeof(ips[0]);

    selectionSortDesc(ips, n);

    cout << "IPS mahasiswa setelah diurutkan dari terbesar ke terkecil:" << endl;
    for (int i = 0; i < n; i++) {
        cout << ips[i] << " ";
    }
    cout << endl;

    return 0;
}
```
#### Output :
![Screenshot 202024-06-10 20085113](https://github.com/Arsitatw/Praktikum-3/blob/master/Praktikum%203/Screenshot%202024-06-10%20085113.png)
#### Penjelasan : 
Pada Array ips berisikan nilai IPS dari lima mahasiswa. Kemudian Fungsi selection Sort Desc untuk mengimplementasikan algoritma Selection Sort untuk mengurutkan array dari terbesar ke terkecil. pada int n di gunakan untuk menyimpan nilai array ke dalam n. Lalu untuk menemukan indeks elemen terbesar di subarray yang dimulai dari i pada maxIdx. Selanjutnya menukar elemen terbesar yang ditemukan dengan elemen di posisi i, setelah itu memanggil fungsi selectionSortDesc untuk mengurutkan daftar IPS. Program ini mengurutkan nilai IPS mahasiswa dari yang terbesar hingga terkecil menggunakan algoritma Selection Sort.

### 2. Buatlah program untuk Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo, dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan nama-nama tersebut sesuai dengan alfabet. Buatlah program untuk membantu Pak RT dengan menggunakan algoritma Bubble Sort!
 ```C++
#include <iostream>
#include <string>
using namespace std;

void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        bool swapped = false;
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                string temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    string warga[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};
    int n = sizeof(warga) / sizeof(warga[0]);

    bubbleSort(warga, n);

    cout << "nama warga setelah diurutkan sesuai alfabet:" << endl;
    for (int i = 0; i < n; i++) {
        cout << warga[i] << " ";
    }
    cout << endl;

    return 0;
}
```

#### Output
![Screenshot 202024-06-10 20085222](https://github.com/Arsitatw/Praktikum-3/blob/master/Praktikum%203/Screenshot%202024-06-10%20085222.png)
#### Penjelasan :
Pertama melakukan inisialisasi daftar nama dengan menggunakan array untuk mrnyimpan nama warga Pak RT, selanjutnya pada fungsi bublesort digunakan untuk mengurutkan array string dalam urutan alfabet. Pada Loop dilakukan iterasi melalui setiap elemen array hingga elemen kedua terakhir. Flag ini digunakan untuk memeriksa apakah ada penukaran elemen dalam satu iterasi. Bandingkan elemen saat ini dengan elemen berikutnya dan tukar jika elemen saat ini lebih besar. Set swapped menjadi true jika terjadi penukaran. Jika tidak ada elemen yang ditukar, keluar dari loop karena array sudah terurut. Selanjutnya memanggil fungsi bubbleSort untuk mengurutkan daftar nama, lalu mencetak daftar nama yang telah diurutkan.

### 3. Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun (descending)!
```C++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bubbleSortAsc(vector<char> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void bubbleSortDesc(vector<char> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    cout << "masukkan jumlah karakter: ";
    cin >> n;

    vector<char> chars(n);
    cout << "masukkan " << n << " karakter: ";
    for (int i = 0; i < n; i++) {
        cin >> chars[i];
    }

    vector<char> charsAsc = chars;
    vector<char> charsDesc = chars;

    bubbleSortAsc(charsAsc);
    cout << "karakter setelah diurutkan secara menaik (ascending): ";
    for (char c : charsAsc) {
        cout << c << " ";
    }
    cout << endl;

    bubbleSortDesc(charsDesc);
    cout << "karakter setelah diurutkan secara menurun (descending): ";
    for (char c : charsDesc) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
```
#### Output
![Screenshot 202024-06-10 20085320](https://github.com/Arsitatw/Praktikum-3/blob/master/Praktikum%203/Screenshot%202024-06-10%20085320.png)
#### Penjelasan :
Melakukan inisialisasi program meminta user untuk menginputkan jumlah karakter n. Program kemudian meminta user untuk menginputkan n karakter dan menyimpannya dalam sebuah vektor chars. Fungsi bubbleSortAsc untuk mengimplementasikan algoritma Bubble Sort untuk mengurutkan vektor arr secara menaik (ascending). Fungsi bubbleSortDesc untuk mengimplementasikan algoritma Bubble Sort untuk mengurutkan vektor arr secara menurun (descending). Vektor chars diurutkan secara menaik menggunakan bubbleSortAsc dan hasilnya ditampilkan. Vektor chars diurutkan secara menurun menggunakan bubbleSortDesc dan hasilnya ditampilkan.



