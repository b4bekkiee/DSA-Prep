#include <iostream>
#include <string> 

using namespace std ;

bool checkEqual( int a [26] , int b [26]  ) {
 
    for(int i = 0 ; i < 26 ; i++) {
        if(a[i] != b[i]) {
            return false ;
        }
    }
    return true ;

}


bool permu(  string s1, string s2) {


    int count1[26] = {0} ;
    for(int i = 0 ;  i < s1.length() ; i++ ) {

        count1[s1[i] - 'a' ] ++ ;
    }

    int i = 0 ; 
    int windowSize = s1.length() ;
    int count2[26] = {0} ;
    while(i < windowSize) {
  
       count2[s2[i] - 'a' ] ++ ;
       i++;

    }
    if(checkEqual(count1,count2)) {
        return true ;
    }
    while(i < s2.length()) {
  
        // char ch = s2[i] ;
        // int index = ch  - 'a' ;
        // count2[index] ++ ;        
        count2[s2[i] - 'a' ] ++;
        // count2[s2[i] - windowSize ] --;


     count2[s2[i - windowSize]  -'a'  ] -- ;

        // char oldChar = s2[i-windowSize] ;
        //   int index = oldChar - 'a' ;
        // count2[index] -- ;
        i++;
        // if(checkEqual(count1,count2)) {
        //     return true ;
        // }

    }
      if(checkEqual(count1,count2)) {
            return true ;
        }


 return false ;

}


int main() {








    string s1 = "abc" ;
    string s2 = "asckjnacjnacnacjascacba" ;

    if(permu(s1,s2)) {
        cout << "founded" ;
    } else {
        cout << "not founded" ;
    }

  



}