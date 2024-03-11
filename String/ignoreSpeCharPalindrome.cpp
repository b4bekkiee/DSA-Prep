#include <iostream>
using namespace std;

// Function to check if a character is an alphabet letter or a digit
bool isAlphabetOrDigit(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
}

// Function to convert uppercase characters to lowercase
char toLowercase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 'a';
    }
    return ch;
}

// Function to check if a given string is a palindrome ignoring non-alphabetic characters and digits
bool palinChecker(char arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        while (start < end && !isAlphabetOrDigit(arr[start])) {
            start++;
        }
        while (start < end && !isAlphabetOrDigit(arr[end])) {
            end--;
        }
        if (toLowercase(arr[start]) != toLowercase(arr[end])) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    char ch[1] = {'1'}; // Example string with special characters and digits
    int n = 1;
    cout << palinChecker(ch, n);

    return 0;
}
