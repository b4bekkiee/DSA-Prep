#include <iostream>
using namespace std ;
void passbyValue(int a) {
    a++;
    cout<< a;

}
int main() {

  
int a = 5;
cout << "value of a in function  : ";
passbyValue(a); //it will create copy of a //OP  :6
cout << endl;
cout <<   "Value of a  original is :  "<< a ;  //cux of passbyvalue concept OP : 5
// what will happend if pointer and variable value is change and updated
  


/// pointer conept 
    int num = 5 ;
    cout << "Value of num is  before  :" << num << endl; //op : 5
    int *ptr = &num;
     (*ptr)++;
     cout <<  " Value of Num after  :" << num <<endl;  // it will print 6 beacuse if the memeory address of num directly access to pointer
 //copying pointer to another pointer 
   int num4 = 5 ;
   int *ptr3 = &num4;
   int *ptr4 = ptr3 ;
   cout << ptr3 << " --" << ptr4 <<endl;
   cout << *ptr3<< " --" << *ptr4;  /// same OP
 cout <<endl;
   //arthimatic concept 

    int i = 2 ;
    int *p = &i;
    // (*p)++; or
    *p +=1;

    cout <<*p; 
    //what if without 8
    cout << "p before  : " << p  <<endl;  // 0x61fef0
    p = p+1;
    cout <<  "P after :"  << p;     // 0x61fef4  it will go tyo another memory address that pass 4 bytes 0x61fef0 to  0x61fef4 



}