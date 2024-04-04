#include <iostream>
using namespace std ;
void sortColors( int arr[] , int n   ) {
 int start = 0 ;
 
 int end = n -1;
 int mid = 0 ;
 while(mid <= end) {
   
  if(arr[mid] == 0  )  {
   swap(arr[start] ,arr[mid] ) ;
   start++;
   mid++;

 }
 else if(arr[mid]  ==1) {

  mid++ ;


 }
 else {
   swap(arr[mid],arr[end]) ;
  end--;
 }
}
}

void printArr( int arr[] , int n  ) {

for(int i = 0 ;  i< n ;i++) {
  cout << arr[i];
}
}



int main()  {

  int arr[7] = {1,0,0,2,0,1,2} ;
  int n = 7;
  sortColors(arr,n);
  printArr(arr,n);
  
}