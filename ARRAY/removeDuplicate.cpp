#include <iostream>

using namespace std  ;

int removeDuplicate(int arr[ ] , int n ) {
    int unique = 1 ;
    for(int i = 0;  i < n ; i++) {
        if(arr[i] !=arr[unique - 1] ) {
            arr[unique] = arr[i] ;
            unique++;
        }
    }
    return unique ;

}

void printArr( int arr[] , int n  ) {

    for(int i = 0  ; i < n ; i++) {
        cout << arr[i];
    }


}

int main() {







    int arr [5] = {1,1,1,1,1} ;
    int  n = 5;
    removeDuplicate(arr,n) ;
    printArr(arr,n);

}