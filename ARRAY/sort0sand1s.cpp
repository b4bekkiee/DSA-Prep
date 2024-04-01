#include <iostream>


using namespace std;

 void sortZeroAndOne(int arr[ ] , int n ) {



   int zero = 0 ;

    for(int i =0 ;i < n ;i++) {
        if(arr[i] != 1) {
            swap(arr[i] ,arr[zero] );
            zero++;
        }

    }
}

void printArr( int arr[] ,int n  ) {


   for(int i =0 ; i< n ; i++) {
    cout<<arr[i];
   }

}



int main() {




    int arr[6] = {0,1,1,0 ,1,0} ;
    int n = 6 ;
    sortZeroAndOne(arr,n) ;
    printArr(arr,n) ;
}