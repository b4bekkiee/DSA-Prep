#include <iostream>
using namespace std;


int incrementer (int arr[] ,int n ) {


int lg = arr[0] ;
 int increase = 0 ;
for(int i =0 ; i< n ;i++) {

  
    if(arr[i]>lg) {

        lg = arr[i] ;
        increase = i ;
    }
}
return arr [increase]++;

}
void printArr(int arr[] , int n) {

for(int i = 0 ; i< n ;i++) {
    cout<<arr[i];
}
}


int main() {




 int arr[3] = {1,2,9} ;
 int n = 3;
 incrementer(arr,n) ;
printArr(arr,n) ;




}