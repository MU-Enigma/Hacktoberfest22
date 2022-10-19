#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int vis[n+1]={0};
    queue<int>q;
    q.push(1);
    vis[1]=1;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        vis[node]=1;
        for(auto x:adj[node])
        {
            if(vis[node]!=1)q.push(x);
        }
    }
}