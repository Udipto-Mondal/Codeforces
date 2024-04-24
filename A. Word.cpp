/**
 *    author:  Udipto
 *    created: Wednesday
24 Apr 2024
Dhaka, Bangladesh
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    int a=0, b=0;

    for(int i=0; i<s.size(); i++){
        if(s[i]<97) a++;
        else b++;
    }
    if(a<=b){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s<<endl;
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<<s<<endl;
    }
    return 0;
}
