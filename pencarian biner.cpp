#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid; // Elemen ditemukan
        else if (arr[mid] < target)
            left = mid + 1; // Cari di sebelah kanan
        else
            right = mid - 1; // Cari di sebelah kiri
    }
    return -1; // Elemen tidak ditemukan
}

int main() {
    // Identitas
    cout << "Nama : Qeis Abdullah Akhmad" << endl;
    cout << "NIM  : 241011400933" << endl;
    cout << "========================" << endl;

    int arr[] = {1, 3, 5, 7, 9, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    
    int result = binarySearch(arr, size, target);
    if (result != -1)
        cout << "Elemen ditemukan di indeks: " << result << endl;
    else
        cout << "Elemen tidak ditemukan." << endl;

    return 0;
}
