#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n;
    cin>>n;
    int count=0;
    string s;
    s= to_string(n);
    for (int i=0; i<s.size();i++)
    {
        if ((s[i]=='4')||(s[i]=='7'))
            count++;
    }
    if ((count ==4)||(count==7))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
