#include <iostream>
#include <array>



using namespace std ;


int main() {


//implementation // static
array <int , 4 > arr = {1,2,3,4} ;


//size of array
// int size = arr.size ();

// //traversing 

// for(int i = 0 ; i < size ;i++ ) {

//     cout << arr[i];
// } ;



//built in function 
cout <<arr.empty();  // 0 for not or 1 for yes 
cout << arr.at(2) ; //at index
cout << arr.front();  //elemt at index 1 
cout << arr.back();   //element at the end 


}