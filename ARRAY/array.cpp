#include <iostream>
using namespace std ; 

int arrPrinting (int array[] , int size) {

 for(int i = 1 ; i<= size ;i++) {


    cout<<array[i];
 }   
 


}

int main(){
        
            int array [10] ;
            int size = 10 ;

            int b = arrPrinting(array,size) ;


            cout << b << "" <<endl ;
   


}