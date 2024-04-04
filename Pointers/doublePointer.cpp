#include <iostream>

using namespace std ;
void update (  int **ptr2 ) {

    // ptr2 = ptr2 + 1; // change  ? nothing
    // *ptr2 = *ptr2+1 ;  //  will change 4 byte in address of ptr
    **ptr2 = **ptr2+1 ;  // it will incremnet the value of i
    

}

int main()  {
    // int i = 7 ;
    // int *ptr = &i ;
    // int **ptr2 = &ptr;
    // cout << ptr; // address of i store in ptr
    // cout << &ptr; //address of PTR
    // cout << ptr2; // address of ptr store in ptr2
    // cout <<&ptr2; // address of Ptr2 itself

    // // accessing values 

    // cout << *ptr; // value of i
    // cout << *ptr2; // it have addrrss of ptr
    // cout << **ptr2; // ptr2 -> ptr -> i


  // double pointer with function
  int i = 7 ;
    int *ptr = &i ;
    int **ptr2 = &ptr;
  cout  <<  "before i - "  <<  i <<endl ;
  cout <<  "before ptr  - "  <<  ptr  <<endl ;
  cout  <<  "before ptr2   - "  <<    ptr2 <<endl ;

 update(ptr2);
 cout  <<  "After i - "  <<  i <<endl ;
  cout <<  "after ptr  - "  <<  ptr <<endl  ;
  cout  <<  "after ptr2   - "  <<    ptr2 <<endl ;












}