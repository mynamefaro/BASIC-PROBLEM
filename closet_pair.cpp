#include <bits/stdc++.h>
using namespace std;

double dis(int x1,int y1,int x2,int y2)
{
    return root((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

double closet_pair(int l,int r)
{
    int mid=(l+r)/2;
    if(l>=r) return 2e9;
    if(r-l==1) return dis(p[l].first,p[l].second , p[r].first , p[r].second);

    double L = closet_pair(l , mid);
    double R = closet_pair(mid + 1,r);
    double d = min(L , R);

    vector <pii> box;
    for(int i=l;i<=r;++i)
    {
        if(abs(p[i].first - p[mid].first) <= d)
        {
            box.push_back(p[i]);
        }
    }
    for(int i=0;i<box.size();++i)
    {
        for(int j=i+1;j<box.size();++j)
        {
            d = min(d , dis(box[i].first , box[i].second , box[j].first , box[j].second));
        }
    }
    return d;
}

int main()
{
    //GET PAIR

    sort(p.begin() , p.end()); //SORT PAIR BY X-AXIS
}
