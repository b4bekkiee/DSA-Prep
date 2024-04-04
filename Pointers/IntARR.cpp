#include <iostream>

using namespace std ;
int main() {
/**    
int arr[4] = {1,3,5,9} ;
cout << "address of first Memory Location :" <<arr <<endl;
//method2 
cout << "address of first Memory Location :" <<&arr[0] <<endl;
 
 //derefernce operator
 cout << "first element :" <<*arr <<endl;
 cout << "incrementing The first element :" <<*arr+1 <<endl;
 cout << "incrementing The first element :" <<*(arr)+1 <<endl;
 cout << "second element printng :" <<*(arr +1 ) <<endl;
 cout << "Third element printng :" <<*(arr +2 ) <<endl;

 

 size checking //mcqs 
int arr2[10] ={0};
cout << "size of ar2 is  : " << sizeof(arr2) <<endl ; // OP ;  10*4 =40
int *ptr = &arr2[0];
cout <<   "Size of Ptr is"  << sizeof(ptr)  <<endl ; //  OP :  4 beacuse of element at location[0] are integer
cout <<   "Size of *Ptr is"  << sizeof(*ptr) <<endl ; 
cout << "size of arr2 adress :" <<    sizeof( &arr) <<endl; //  OP : 4 

// adrresses

int temp [3] = {1,2,3} ;
cout << "address od temp :"   <<  temp << endl; // OP : :0x61ff04
int *ptr = &temp[0] ; 
cout <<  "address of Which PTr holding the var add " << ptr<<endl ; // OP : :0x61ff04
cout <<  "address of Ptr itself " << &ptr<<endl ; //OP : 0x61ff00 */

// arthimatic 
//error arr = arr+1;
//possible in ptr 
int arr[3] = {1,2,3} ;
int *ptr = &arr[0];
ptr = ptr+1;
cout << *ptr; // OP : 2 [address + 4bytes it ]







 








}