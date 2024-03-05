#include <iostream>

using namespace std;

void binarySearch(int arr[], int n, int key) {

  int start = 0;
  int end = n - 1;

  int mid = (start + end) / 2;
  while (start <= end) {

    if (arr[mid] == key) {
      cout << " key is present at :" << mid;
      return;
    }
    if (key > arr[mid]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }

    mid = (start + end) / 2;
  }
  cout << "Key is not present";
}

int main() {

  int arr[5] = {1, 2, 3, 4, 5};
  int n = 5;
  int key = 6;
  binarySearch(arr, n, key);
}
