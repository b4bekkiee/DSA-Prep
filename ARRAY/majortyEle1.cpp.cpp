#include <iostream>



 //approach 1 BruteForce o(n^2) ;
  //Btter ? using Moore Voting Algo

using namespace std ;

int majorityElement( int arr[] , int n  ) {


    int counter = 0 ;
    for(int i = 0 ; i< n ;i++) {
        for(int j= 0 ; j < n ;j++) {
            if(arr[i]==arr[j]) {
                counter++ ;
            }
        }
        if(counter > n/2) {
            return arr[i] ;
        }
    }
    return -1 ;
}

int main() {








   int arr[5]= {1,1,1,2,2} ;
   int n = 5 ;

  cout << majorityElement(arr,n);

}