#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<vector>
#include<cmath>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fastio;
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        if((n==2010)||(n==2015)||(n==2016)||(n==2017)||(n==2019))
        {
            cout<<"HOSTED"<<endl;
        }
        else{
            cout<<"NOT HOSTED"<<endl;
        }

    }


   return 0;
}
