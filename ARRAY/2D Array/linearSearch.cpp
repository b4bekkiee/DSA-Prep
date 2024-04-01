#include <iostream>
using namespace std ;
bool founded( int arr[][4] ,int n , int m,int target ) {


   for(int i =0 ; i<n ; i++) {
    for(int j = 0 ; j<m ;j++) {
        if(arr[i][j] == target ) {
            return true;
        }
    }
   }
   return false ;

}

int main() {





    int arr[3][4] = {{1,2,3,4} ,{5,6,90,8},{9,10,11,12}};
    int n = 3;
    int m = 4;
    int target = 90;

    if(founded(arr,n,m,target)) {
        cout << "Founded" ;
    }
    else {
        cout << "Not founded" ;
    }
}
