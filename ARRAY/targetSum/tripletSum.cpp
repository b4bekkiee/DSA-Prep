#include <iostream>


using namespace std ;

void triSum(int arr[] , int n , int target ) {

     for(int i = 0 ; i < n ; i++ ) {
        for(int j = i +1; j < n ;j++) {
            for(int k = j+1 ; k < n ; k++) {
                if(arr[i] + arr[j] + arr[k] == target  ) {

                  cout << arr[i] <<   "+" << arr[j] << "+" << arr[k] << "=" <<target <<endl ;
                }
            }
        }
     }


}

int main() {






    int arr[] = {1,2,3,4,4,5,6,6,6,11,0} ;
    int n = 11;
    int target = 19 ;

    triSum(arr,n,target) ;
}