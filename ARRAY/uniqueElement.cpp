#include <iostream> 
using namespace std ;

int main() {




int arr [5] = {1,1,2,2,4} ;

int n = 5 ;




int ans =0 ;
for(int i =0 ; i< n ;i++) {


    ans = ans  ^ arr[i] ;
    cout << ans ;

}






}