#include <bits/stdc++.h>
using namespace std;

int seg[100000];

int query(int a,int b,int n){
	a+=n-1;
	b+=n-1;
	int ans = 2e9;
	while(a <= b){
		if(a%2==1) ans=min(ans , seg[a++]);
		if(b%2==0) ans=min(ans , seg[b--]);
		a/=2;
		b/=2;
	}
	return ans;
}
void update(int a,int b,int n){
	a+=n-1;
	seg[a] = b;//Update Aa is b
	a/=2;
	while(a > 0){
		seg[a] = min(seg[2*a] , seg[2*a + 1]); //Update mother node because child node was changed.
		a/=2;
	}
}
int main(){
	//generate segment tree
	
	for(int i = 0;i<n;++i){
		int ax;
		cin >> ax; //recieve Ax in A sequence
		update(i , ax , n);
	}
	//query
	int l,r;
	cin >> l >> r;
	cout << query(l , r , n);
}
