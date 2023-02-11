// link https://cses.fi/problemset/task/1621

#include<bits/stdc++.h>
using namespace std;
#define unhuman ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define vi vector<int>
#define vll vector<long long>
#define ll long long
#define all(x) x.begin(),x.end()
void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
	#endif
}

void readvll(auto &v,auto &cnt){
auto x=0.0;
for (ll i = 0; i < cnt; ++i){cin>>x;v.push_back(x);}
}

void prns(auto x){for(auto y:x)cout<<y<<" ";}

void solve(){
ll n;
cin>>n;
vll x;
readvll(x,n);
sort(all(x));
ll pre=0,distinct=0;
for(ll j=0;j<n;j++)if(x[j]!=pre){pre=x[j];distinct++;}
cout<<distinct;
}


int main(){
	unhuman
	init_code();
	ll t=1;
	//cin>>t;
	while(t--)solve();
}
