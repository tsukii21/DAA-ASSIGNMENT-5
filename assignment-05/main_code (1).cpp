#include<bits/stdc++.h>
using namespace std;
#include<vector>
#include<map>
#include<queue>
#include<utility>
#include<set>
#define lli long long int
#define maplli map<lli,lli>
#define iterm maplli::iterator
#define fi first
#define si second
#define For(i,a,b) for(lli i=a;i<b;i++)
#define vec vector<lli>
#define pb push_back
#define mp make_pair
#define iterv vector<lli>::iterator
#define pi pair<lli,lli>
#define vecpi vector<pi>
#define iterpi vector<pi>::iterator
#define Q queue
#define PQ priority_queue
#define mapc map<char,lli>
#define itermc map<char,lli>::iterator 
#define vecset vector<set<lli>>
#define itervs vecset::iteratorlli 
#define Forb(i,a,b) for(lli i=a;i>=b;i--)
#include<tuple>
#define tal tuple<lli,lli,lli> 
int main()
{
    lli t;
    cout<<"ENTER TOTAL NUMBER OF TEST CASES:"<<endl;
    cin>>t;
    cout<<"ENTER THE TEST CASES:"<<endl;
    while(t--)
    {
        lli n,k;
        cout<<"ENTER LENGTH OF ARRAY AND THE VALUE OF K:"<<endl;
        cin>>n>>k;
        lli K=k;
        lli a[n+1];
        lli orr=0;
        cout<<"ENTER ARRAY ELEMENTS:"<<endl;
        For(i,1,n+1){cin>>a[i];orr=orr|a[i];}
        if(orr<k)
        {
            cout<<"0"<<endl;continue;
        }
        k=orr;
        lli** dp=new lli*[n+1];
        For(i,0,n+1)
        {
            dp[i]=new lli[k+1]();
        }
        dp[0][0]=1;
        For(i,1,n+1)
        {
            For(j,0,k+1)
            {
                dp[i][j]=dp[i-1][j]+dp[i-1][j^a[i]];
            }
        }
        cout<<"Answer = "<<dp[n][K]<<endl<<endl;
    }
}