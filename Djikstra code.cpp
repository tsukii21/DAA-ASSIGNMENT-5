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
void updchild(vecpi* edges,lli vert,lli* dist,PQ<pi,vector<pi>,greater<pi>> &pq)
{
    lli d=dist[vert];
    for(auto it:edges[vert])
    {
        lli z=it.fi;
        if(z+d<dist[it.si])
        {
            dist[it.si]=z+d;
            pq.push(mp(dist[it.si],it.si));
        }
    }
}

void Djikstra(vecpi* edges,lli n,lli sv,bool* visited)
{
    PQ<pi,vector<pi>,greater<pi>> pq;
    lli* dist=new lli[n+1]();
    For(i,1,n+1)dist[i]=INT_MAX;
    dist[sv]=0;
    pq.push(mp(dist[sv],sv));
    while(!pq.empty())
    {
     lli vert=(pq.top()).si;
     pq.pop();
     if(visited[vert])
     continue;
     visited[vert]=true;
     updchild(edges,vert,dist,pq);
    }
    For(i,1,n+1){
    if(dist[i]==INT_MAX)
    dist[i]=-1;
    cout<<dist[i]<<" ";
    }
}

void graphdec()
{
    lli n,m;
    cin>>n>>m;
    vecpi* edges=new vecpi[n+1]();
    For(i,1,m+1)
    {
        lli v1,v2,w;
        cin>>v1>>v2>>w;
        edges[v1].pb(mp(w,v2));
        edges[v2].pb(mp(w,v1));
    }
    bool* visited=new bool[n+1]();
    lli sv;
    cin>>sv;
    Djikstra(edges,n,sv,visited);
}
int main()
{
lli t;
    cin>>t;
    while(t--)
    {
        graphdec();
    }

}
