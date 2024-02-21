#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string n;
    cin>>n;
    char c;
    int a=0,b=0;
   for(char c:n){
        if(c =='A')
            a++;
        else b++;
   }
   if (a>b)
    cout<<"A"<<endl;
   else
    cout<<"B"<<endl;
}
return 0;
}

