#include <iostream>
using namespace std ;
bool binarySearch( int arr[][3] , int n , int m , int target  ) {

    int start = 0 ; 
    int end = n*m -1;
    int mid = (start + end) /2 ;
   while(start <= end) {
     int element = arr[mid/m][mid%m] ;
     if(element == target)   {
        return true ;
     }
     else if(element  < target) {
        start = mid + 1 ;
     }
     else {
        end = mid -1  ;
     }
     mid = (start + end) /2 ;
   }
   return false ;

}

int main() {
 

   
int arr[3][3] = {{1,2,6},{9,11,19},{22,23,25}};
int n = 3 ;
int m = 3 ;
int target = 22;

if(binarySearch(arr,n,m,target)) {
    cout << "Founded";
}
else {
    cout << " Not founded";
}
return 0 ;


}