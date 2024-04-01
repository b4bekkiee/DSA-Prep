#include <iostream>
using namespace std ;


void sorter( int arr[] , int n ) {

int count0;
int count1;
int count2 ;
for(int i = 0 ; i < n ;i++) {

    if(arr[i]==0) {
        
        count0++; }
    if(arr[i] == 1 ) {
    count1++;}
    if(arr[i] == 2  ) {
    
    
     count2++;}
}  
for(int i  = 0 ; i<count0 ;i++) {
    arr[i]= 0;
}

for(int i  = count0 ; i<count0+count1 ;i++) {
    arr[i]= 1;
}
for(int i   = count0+count1 ; i <n ;i++) {
    arr[i]= 2;
}
}
 void  printArr(int arr[] , int n ) {

    for(int i = 0 ; i < n ;i++) {
        cout << arr[i];
    }

 }

int main() {


    int arr[4] = {1,2,2,0} ;
    int n = 4 ;
    sorter(arr,n);
    printArr(arr,n);

}