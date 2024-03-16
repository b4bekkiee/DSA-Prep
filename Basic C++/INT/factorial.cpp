#include <iostream>
using namespace std ;


int main() {


    int num ;
    
    cout <<  "Enter Number to find factorial ";
    cin >> num; 
       long factorial = 1 ;
   

    if(num < 0) {
        cout <<  "For neg numbers can't avail " ;

    }else {
        for(int i = 1 ; i <= num ; i++) {
            factorial = factorial * i ;
        }
        cout << "factorial is"   <<factorial;
    }




}