#include <iostream>
using namespace std ;

int main() {

 int a = 5 ;
 int b = 10 ;

//  method1 
 swap(a,b  ) ;
 cout <<a,b;

// method 2 with store the temp var

int temp = a;
a=b;
b= temp;
// cout << a <<b;

cout << "A is" << a <<endl;
cout << "B is" << b;



// method 3 using arthimatic + -
a = a+b;
b = a-b;
a = a-b;
cout << "A is" << a <<endl;
cout << "B is" << b;

// method 4 using * and /

 a = a*b;
 b = a/b;
 a = a/b;
 cout << "A is" << a <<endl;
cout << "B is" << b;

// method 4 using xor

a = a ^ b;
b = a^b;
a = a ^ b;
cout << "A is" << a <<endl;
cout << "B is" << b;






}