#include<bits/stdc++.h>
using namespace std;
int main (){

    int n,count,i;
    cin>>n;
    string s;
    cin>>s;

    for (int i=0;i<n;i++){
        if (s[i]==s[i+1])
        count++;
    }
    cout<<count<<"\n";

return 0;
}
