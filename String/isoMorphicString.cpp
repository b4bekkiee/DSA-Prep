#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isIso(string str1 , string str2) {

    if(str1.size() != str2.size()) {
        return false ;
    }
    vector <int> v1(128,-1) ;
    vector <int> v2(128,-1) ;
       
    for(int i = 0 ; i < str1.size() ; i++) {
        if(v1[str1[i]] != v2[str2[i]]) {

            return false ;
        }
        else {
            v1[str1[i]] = v2[str2[i]] = i ;
        }
    }
    return true ;

}
int main() {








string str1 = "eggs" ;
string str2 = "add" ;

if(isIso(str1,str2)) {
    cout << "The given string is Iso";
}
else {
    cout << "The given string is Not" ;
}





}