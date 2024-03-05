#include <iostream>

using namespace std ;


void selectionSort ( int arr[] , int n ) {


    for(int i = 0 ; i < n-1 ; i++) {


        int minIndex = i ;
        for (int j = i + 1 ;  j < n ; i++) {

            if(arr[j] < arr[minIndex] ) {

                minIndex =  j ;

            }
        }

        swap(arr[minIndex] , arr[i] );
    }


  







}
void printArr (int arr[] , int n ) {

    for(int i = 0 ; i < n ; i++) {

        cout << arr[i];
    }


}
int main() {



int arr [5] = {5,4,3,2,1} ;
int n =  5 ;


selectionSort(arr,n) ;
printArr(arr,n);





}