#include <iostream>

using namespace std ;

//rowWise sum
void RowWiseSum( int arr[][3]  ,int n ,int m ) {

for(int i = 0 ; i<n ;i++) {
    int sum = 0;
    for(int j = 0 ; j<m ;j++) {
     sum = sum + arr[j][i];
    //   cout<<sum;
    }
    cout<<sum<<endl;
}


}
//colWiseSum
void colWiseSum( int arr[][3]  ,int n ,int m ) {

for(int i = 0 ; i<n ;i++) {
    int sum = 0;
    for(int j = 0 ; j<m ;j++) {
     sum = sum + arr[i][j];
    //   cout<<sum;
    }
    cout<<sum<<endl;
}


}

//greatest row sum and their index
void GreatestRowWiseSum( int arr[][3]  ,int n ,int m ) {
 int maxi =INT8_MIN;
 int index = -1;
for(int i = 0 ; i<n ;i++) {
   
    int sum = 0;
    for(int j = 0 ; j<m ;j++) {
     sum = sum + arr[j][i];
      if(sum >maxi) {
         maxi=sum ;
         index = j;
    
    }
    //   cout<<sum;
    }
    
   
    

    // cout<<sum<<endl;
}
cout<<"The greatest Sum of Row  is : " << maxi << "and Their index is :" <<   index;

}

int main() {



int arr[3][3] = {{1,2,3},{1,2,3},{1,2,3} } ;
int n = 3;
int m = 3;


    cout <<"rowWiseSum" <<endl; 
         RowWiseSum(arr,n,m);


 cout <<"colWiseSum" <<endl ;

 colWiseSum(arr,n,m);
  
 GreatestRowWiseSum(arr,n,m);


}