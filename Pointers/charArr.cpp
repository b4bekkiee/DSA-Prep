#include <iostream>
using namespace std ;
int main() {

   /*char ch [6] = "abcde" ;   //one for Null char to stop
  cout << ch; // it will never print address it will print the elements OP : abcde 

char *ptr = &ch[0];
 cout <<ptr<<endl ; //same behaviour it will not print address OP : abcde
 cout << *ptr << endl; // OP : a */
  char temp = 'a';
  char *ptr2 = &temp;
  cout <<ptr2 <<endl; // it will print some random until it found null char
 
  cout <<*ptr2;
}