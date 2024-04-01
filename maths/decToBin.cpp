#include <iostream>
#include <math.h>

using namespace std;
int main() {

  int decimal = 5;

  int i = 0;
  int answer = 0;
  while (decimal != 0) {

    int bit = decimal & 1;

    answer = (bit * pow(10, i)  ) + answer;

    decimal = decimal >> 1;
    i++;
  }
  cout << answer;
}