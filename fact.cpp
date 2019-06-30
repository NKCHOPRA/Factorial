#include<bits/stdc++.h>
#define MAX 100
#define ll long long
#define nil -1
using namespace std;

ll look[MAX]={-1};
 void inilize()
 {
     for(int i=0;i<MAX;i++)
     {
         look[i]=nil;
     }
 }

ll fact(int n)
{
    if(n>=0)
    {
        if(look[n]==nil)
        {
            if(n<=1)
                look[n]=1;
            else
            {
                look[n]=n*fact(n-1);
            }
        }
    }
    return look[n];

}
main()
{
    inilize();
    cout<<"Enter number";
    int n;
    cin>>n;
    cout<<fact(n);
}
