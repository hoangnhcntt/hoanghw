#include <iostream>
abc
def
using namespace std;

// Hàm tìm kiếm nhị phân
int binarySearch(int arr[], int n, int k) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == k) {
            return mid;  // Tìm thấy
        }
        else if (arr[mid] < k) {
            left = mid + 1;  // Tìm kiếm nửa phải
        }
        else {
            right = mid - 1;  // Tìm kiếm nửa trái
        }
    }
    
    return -1;  // Không tìm thấy
}

int main() {
    int n;
    cout << "Nhập số lượng phần tử: ";
    cin >> n;
    
    int *arr = new int[n];
    cout << "Nhập " << n << " số (đã sắp xếp): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int k;
    cout << "Nhập số K cần tìm: ";
    cin >> k;
    
    int result = binarySearch(arr, n, k);
    
    if (result != -1) {
        cout << "Tìm thấy số " << k << " tại vị trí: " << result << endl;
    }
    else {
        cout << "Không tìm thấy số " << k << endl;
    }
    
    delete[] arr;
    return 0;
}
