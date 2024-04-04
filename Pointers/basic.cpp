#include <iostream>
using namespace std ;

int main() {

 
  int num = 5;
  cout << num;
  cout << &num  <<endl; // address of num
//pointer store addrreses
  int *ptr = &num;  // p is a pointer to int where * is derefernce opt
  cout <<    ptr <<endl; // it will print num address
  cout << *ptr <<endl;// will print the value of num cux of * operator

  char ch = 'a';
  char *ptr2 = &ch;
  double num2 = 3.2;
  double *ptr3=&num2;
  cout << *ptr2<<endl;    
  
   cout << "size of  int num is  :" <<sizeof(num) <<endl ;
   cout << "size of ptr is  :" <<sizeof(ptr)<<endl ;
   cout << "size of char is  :" <<sizeof(ch)<<endl ;
   cout << "size of ptr2 is  :" <<sizeof(ptr2)<<endl ;
   cout << "size of double num is  :" <<sizeof(num2)<<endl;
   cout << "size of ptr3 is  :" <<sizeof(ptr3)<<endl;
   //ptr only store the address so thats why the size of ptr is remain same 4 or some 8 bytes  

   int *ptr4; //bad practice it will store some garbage value 
   cout <<*ptr4;
   int *ptr6 = 0;
   cout <<*ptr6 << endl; // it will print value is not assigned

   int num8 = 8 ;
   int *ptr7 = 0 ;
   ptr7 = &num8;
   cout <<"address of num8 is :" << *ptr7 ;
  
  








}