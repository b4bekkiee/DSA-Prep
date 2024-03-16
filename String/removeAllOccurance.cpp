#include <iostream>
#include <string>
using namespace std ;

    void removeOccurance (string str  , string part) {
        while(str.length() != 0 && str.find(part) < str.length() )
        {
            str.erase(str.find(part , part.length()));
        }
        
    //  return str ;
    cout << str;
    }
      

int main() {

  string str = "daabcbaabcbc";

  string part = "abc" ;
   removeOccurance(str,part) ;

}