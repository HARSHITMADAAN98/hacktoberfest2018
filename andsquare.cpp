///goldbackinjector
#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<vector>
#include<cmath>
using namespace std;
bool isPerfectSquare(long double x)
{
  // Find floating point value of
  // square root of x.
  long double sr = sqrt(x);

  // If square root is an integer
  return ((sr - floor(sr)) == 0);
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int n,q;cin>>n>>q;
        long long int arr[1000000];
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        while(q--)
        {
            long long int l,r;cin>>l>>r;long long int counts=0;
            l=l-1;r=r-1;
            for(long long int i=l;i<=r;i++)
            {int ands=arr[l];
                for(long long int j=l;j<=i;j++)
                {
                     ands=ands&arr[j];
                }
                if(isPerfectSquare(ands)){counts++;}
            }
            cout<<counts<<endl;
        }

    }


   return 0;
}
