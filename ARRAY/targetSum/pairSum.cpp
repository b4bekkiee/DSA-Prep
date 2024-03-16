#include <iostream>

using namespace std;

void targetSum(int arr[], int size, int target) {

  //  int pair = 0 ;

  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] + arr[j] == target) {
        cout << "The " << arr[i] << "+" << arr[j] << "=" << target <<endl;
        // pair++;
      }
    }
  }
}

int main() {

  int arr[] = {2, 2, 3, 1, 5};
  int size = 5;
  int target = 13;

  targetSum(arr, size, target);
}