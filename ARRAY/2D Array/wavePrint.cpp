#include <iostream>



     //code ninja problem



using namespace std ;
void wavePrint( int arr[][3] , int n , int m   ) {



    for(int i = 0 ; i < n ;i++) {


  if(i &1) {
  
      for(int j = m-1 ;j >=0 ; j--) {
        cout << arr[j][i];
      }
      cout<<endl;
  }
  else  {
   
   for(int j  = 0 ; j<m ;j++) {
    cout << arr[j][i];
   }
  }


    }

}

int main() {







 int arr[3][3] = {{1,2,3},{1,2,3} , {1,2,3} } ;
 int n = 3 ;
 int m = 3;

   wavePrint(arr,n,m) ;


}