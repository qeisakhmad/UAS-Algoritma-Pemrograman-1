#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk menggabungkan dua sub-array
void merge(vector<pair<int, string>>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<pair<int, string>> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i].first <= R[j].first) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Fungsi utama untuk melakukan merge sort
void mergeSort(vector<pair<int, string>>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    // Identitas
    cout << "Nama	: Qeis Abdullah Akhmad" << endl;
    cout << "NIM	: 241011400933" << endl;
    cout << "========================" << endl;

    // Contoh data pesanan: {waktu pemesanan (dalam menit), ID pesanan}
    vector<pair<int, string>> orders = {
        {30, "Order1"}, {10, "Order2"}, {20, "Order3"}, {50, "Order4"}
    };

    cout << "Data pesanan sebelum diurutkan:\n";
    for (const auto& order : orders) {
        cout << "Waktu: " << order.first << ", ID: " << order.second << endl;
    }

    mergeSort(orders, 0, orders.size() - 1);

    cout << "\nData pesanan setelah diurutkan:\n";
    for (const auto& order : orders) {
        cout << "Waktu: " << order.first << ", ID: " << order.second << endl;
    }

    return 0;
}
