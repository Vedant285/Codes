#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int>k[],int u,int v)
{
    k[u].push_back(v);
    k[v].push_back(u);
}
void print(vector<int>k[],int V)
{
    for(int v=0;v<V;v++)
    {
        for(auto x:k[v])
        cout<<"->"<<x;
        cout<<endl;

    }
}
int main()
{
    int v=5;
    vector<int>k[5];
    addedge(k,0,1);
    addedge(k,0,4);
    addedge(k,1,2);
    addedge(k,1,3);
    addedge(k,1,4);
    addedge(k,2,3);
    addedge(k,3,4);
    print(k,v);
}