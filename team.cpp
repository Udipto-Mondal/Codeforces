#include<bits/stdc++.h>
using namespace std;
int main (){
int t,cou=0;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
 if ((a==1 && b==1)||(b==1 && c==1)||(c==1 && a==1))
        cou++;
}
    cout<<cou<<endl;

return 0;
}
