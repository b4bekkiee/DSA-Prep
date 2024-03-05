#include <iostream>
#include <math.h>
 
using namespace std ;




bool checkKey (int arr[],int n , int key) {


for(int i=0 ; i < n ; i++)

if(key == arr[i]) {
    return 1 ;
}
return 0 ;
 


}

int main(){




    int arr [4] = {3,4,5,6} ;
    int n = 4 ;
    int key = 9 ;

     int founded = checkKey(arr,n,key);
     if(founded ==  1) {
        cout << "key Founded";
     }   
     else {
        cout << "key is not founded" ;
     }

    cout <<"EVeryThing is Fine";

    return 0 ;
}


