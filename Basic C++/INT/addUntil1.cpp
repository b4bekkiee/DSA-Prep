 int number = 38;

  while (number >= 10) {
    int sum = 0;
    while (number != 0) {

      int digit = number % 10;

      sum = sum + digit;
      number = number / 10;
    }

    number = sum;
  }
  cout << number;