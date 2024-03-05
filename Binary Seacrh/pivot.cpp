#include <iostream>

using namespace std ;


int pivot(int arr[] , int n) {

    int start = 0;
    int end = n-1 ;
    
    int mid = (start + end )/2 ;
    while(start  < end) {
        if(arr[mid] >= arr[0]) {

           start = mid+1 ;
            }
           
           else  {
            end = mid;
           }
    mid = (start + end )/2 ;
           }
           return start ;
           
}






int main() {

int arr [5] = {9,7,1,2,3} ;
int n = 5 ;


cout << "Pivot an array as  :"  << pivot(arr,n);



}