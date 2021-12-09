#include <bits/stdc++.h>
using namespace std;

void tarjan(int u,int p)
{
    low[u] = disc[u] = ++cnt;

    for(auto v:G[u])
    {
        if(!disc[v])
        {
            tarjan(v , u);
            low[u] = min(low[u] , low[v]);

            if(disc[u] <= low[v])
            {
                //u is ap
            }
            if(disc[u] < low[v])
            {
                edge {u,v} is bridge
            }
        }else if(v != p)
        {
            low[u] = min(disc[v] , low[u]);
        }
    }
}
