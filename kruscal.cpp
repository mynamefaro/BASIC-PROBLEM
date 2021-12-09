#include <bits/stdc++.h>
using namespace std;

int find(int u)
{
    if(p[u]==-1) return u;
    return p[u]=find(p[u]);
}

bool mergee(int u,int v)
{
    u = find(u);
    v = find(v);
    if(u == v) return false; //fail
    p[u] = v;
    return true; //success
}
int main()
{
    for(auto e:E) //sort E by weight from minimum to maximum
    {
        int u= e.first;
        int v= e.second;
        int w= e.third;
        if(mergee(u , v)) //merge success
        {
            ans += w;
        }
    }
    cout << ans;
}
