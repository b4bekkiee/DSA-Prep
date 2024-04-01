#include <iostream>

using namespace std ;


int main() {

   //input
    // int arr[4][4];  

    // for(int i = 0 ; i < 4 ;i++) {

    //     for(int j = 0 ; j < 4 ;j++) {
           

    //        cin>>arr[i][j];
    //     }
       
    // }
  
    
    int arr[4][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333},{4,44,444,4444}};


      //output
    for(int i = 0 ; i < 4 ;i++) {

        for(int j = 0 ; j < 4 ;j++) {
           

           cout<<arr[i][j]; 

        }
        cout<<endl;
       
    }
}