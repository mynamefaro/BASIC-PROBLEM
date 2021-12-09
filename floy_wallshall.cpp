#include <bits/stdc++.h>
using namespace std;

int floy_wallshall()
{
    for(auto e:E)
    {
        int u = get<0>(e);
        int v = get<1>(e);
        int w = get<2>(e);
        dis[u][v] = w;
    }
    //for all i and j dis[i][j] =INF and dis[i][i]=0;
    for(int k=1;k<=N;++k)
    {
        for(int i=1;i<=N;++i)
        {
            for(int j=1;j<=N;++j)
            {
                if(dis[i][j] > dis[i][k] + dis[k][j])
                {
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }
}
