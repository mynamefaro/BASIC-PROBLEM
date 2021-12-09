#include <bits/stdc++.h>
using namespace std;

void bellman_ford()
{
    dis[S] = 0;
    bool found_change;
    int round=0;
    do{
        found_change=false;
        for(auto e:E)
        {
            int u=get<0>(e);
            int v=get<1>(e);
            int w=get<2>(e);
            if(dis[v] > dis[u] + w)
            {
                dis[v] = dis[u] + w;
                found_change = true;
            }
        }
        ++round;
        if(round > N - 1) //compute over tree
        {
            break;
        }

    }while(found_change);
}
