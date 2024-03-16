#include <iostream>
using namespace std ;
void zeroToRight(int arr []  , int n ) {
    int nonZero = 0 ;

    for(int i = 0 ; i < n ; i++) {
        if(arr[i] != 0 ) {
            // swap(arr[i] ,arr[nonZero]  ) ;
            // nonZero++;
            
            int temp = arr[i] ;
            arr[i] = arr[nonZero] ;
            arr[nonZero] = temp ;
            nonZero++;

        }
        

    }
}

void printArr(int arr [] , int n ) 
{
 
   for(int i = 0 ; i < n ; i++ ) {

    cout << arr[i];
   }



}

int main() {




    int arr [4] = {0,1,0,2} ;
    int n = 4 ;
    zeroToRight(arr,n) ;
    printArr(arr,n);

}