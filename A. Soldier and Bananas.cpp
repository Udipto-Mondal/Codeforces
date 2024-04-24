/**
 *    author:  Udipto
 *    created: Wednesday
24 Apr 2024
Dhaka, Bangladesh
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int a=0;
    for(int i=1; i<=w; i++){
        a+=i*k;
    }
    cout<<a-n<<endl;

    return 0;
}
