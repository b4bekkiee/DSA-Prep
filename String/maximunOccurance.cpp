#include <iostream>
using namespace std ;


int main() {


    int num ;
    int factorial = 1 ;
    cin >> num; 
    cout <<  "Enter Number to find factorial ";

    if(num < 0) {
        cout <<  "For neg numbers can't avail " ;

    }else {
        for(int i = 1 ; i <= num ; i++) {
            factorial = factorial * i ;
        }
        cout << "factorial is"   <<factorial;
    }




}