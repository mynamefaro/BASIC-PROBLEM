#include <bits/stdc++.h>
using namespace std;

int deg[NN]; // indegree
int topology_sort()
{
    queue <int> Q;
    for(auto u : vertex)
    {
        if(!deg[u])
        {
            Q.push(u);
        }
    }
    while(!Q.empty())
    {
        int u=Q.top();Q.pop();
        ans.push_back(u);
        for(auto v:G[u])
        {
            if(--deg[v] == 0)
            {
                q.push(v);
            }
        }
    }
}
