#include <iostream>

 



using namespace std ;







void swapAlternate (int arr[],int n) { 

for(int i= 0 ; i <n ; i = i+2 ){


    if(i+1 < n) {
        swap(arr[i],arr[i+1]);
    }
}







}
void printArr (int arr[],int n) { 

for(int i =0 ; i<n ; i++) {

    cout << arr[i];
}
  
    

}
int main() {


int arr [4] = {1,2,3,4} ;
int n = 4 ;

int arr2 [5] = {5,6,7,8,9};
int o = 5 ;
swapAlternate(arr,n);
printArr(arr,n);

swapAlternate(arr2,o);

cout << endl;

printArr(arr2,o) ;

  

 




}