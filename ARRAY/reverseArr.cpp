#include <iostream>

using namespace std;



void reverseArr (int arr[],int n) {

    int start = 0 ;
    int end = n-1 ;
    while(start < end) {
        swap(arr[start],arr[end]) ;

        start ++ ;
        end--;
    }

}
 
int main() {



 


int arr[4] = {1,2,3,4} ;

int n = 4 ;

reverseArr(arr,n); ;

 cout << arr[0];





  


}