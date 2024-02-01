#include<bits/stdc++.h>
using namespace std;
vector<int>bfs(int v,vector<int>adj[])
{
    int vis[v]={0};
    vis[2]=1;
    queue<int>q;
    q.push(2);
    vector<int>ans;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        ans.push_back(node);
        for(auto i:adj[node])
        {
            if(!vis[i])
            {
                vis[i]=1;
                q.push(i);
            }
        }
    }
    return ans;
}
void dfs(int node,vector<int>adj[],int vis[],vector<int>&ls)
{
    vis[node]=1;
    ls.push_back(node);
    for(auto it:adj[node])
    {
        if(!vis[it])
        {
            dfs(it,adj,vis,ls);
        }
    }
}
vector<int>dfsof(int v,vector<int>adj[])
{
    int vis[v]={0},start=0;
    vector<int>ls;
    dfs(start,adj,vis,ls);
    return ls;
}
void add_edge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main()
{
    int n=4;
    vector<int>adj[n+1];
    add_edge(adj,0,1);
    add_edge(adj,0,2);
    add_edge(adj,1,2);
    add_edge(adj,2,0);
    add_edge(adj,2,3);
    add_edge(adj,3,0);
    vector<int>ans=bfs(4,adj);
    for(auto i:ans)
    {
        cout<<i<<'\t';
    }
    cout<<endl;
    vector<int>kl=dfsof(4,adj);
    for(auto j:kl)
    {
        cout<<j<<'\t';
    }

}