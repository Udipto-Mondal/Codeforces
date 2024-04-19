#include<bits/stdc++.h>
using namespace std;
int main()
{  int i;
  string a;
  cin>>a;
  if(a[0]>=97&&a[0]<=122)
  {
    a[0]-=32;
  }
  for(i=1;a[i]!='\0';i++)
  {
    if(a[i-1]==32)
    {
        if(a[i]>=97 &&a[i]<=122)
        {
           a[i]-=32;
        }
    }
  }
  cout<<a;
  return 0;
}

