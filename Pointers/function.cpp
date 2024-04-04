#include <iostream>
using namespace  std;
//  void updateAddress(int  *ptr) {  
//    ptr=ptr+1;
//    cout <<  "inside Function address"  <<  ptr << endl; //  OP : 0x61ff0c differnet
//  }

//  void updateValues( int *ptr )  {
   
//    *ptr = *ptr + 1;
//  }

int getSum(int *arr , int n ) {
  cout << sizeof(arr) << endl ;  // cux of function take array as a pointer thats why it size will be 4 byes 
  int sum = 0 ;
  for(int i = 0 ; i< n ;i++) {
    sum += arr[i];
  }
  return sum;

}

int main() {


  
  // int num = 40 ;
  // int *ptr = &num;
  
  
  // cout <<   "Before pointer :"  << ptr << endl; // OP : :0x61ff08

  //   updateAddress(ptr);
  //   cout <<   "After update pointer :"  << ptr << endl; //OP : :0x61ff08 same
     
  //   cout <<    " PTR value before" << *ptr <<endl; // OP : 40

  //   updateValues(ptr);
  //   cout <<    " PTR value After" << *ptr  << endl; // Op : 41 Beacuse of it will on their address

 int arr[6]= {1,2,3,4,5} ;
cout <<getSum(arr+4 ,5) ; /// array act like pointer when passing to function 


}