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
