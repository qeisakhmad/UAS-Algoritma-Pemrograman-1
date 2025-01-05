#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            return i; // Elemen ditemukan
    }
    return -1; // Elemen tidak ditemukan
}

int main() {
    // Identitas
    cout << "Nama	: Qeis Abdullah Akhmad" << endl;
    cout << "NIM	: 2401011400933" << endl;
    cout << "========================" << endl;

    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 30;
    
    int result = linearSearch(arr, size, target);
    if (result != -1)
        cout << "Elemen ditemukan di indeks: " << result << endl;
    else
        cout << "Elemen tidak ditemukan." << endl;

    return 0;
}
