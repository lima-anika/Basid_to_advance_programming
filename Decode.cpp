#include<bits/stdc++.h>
using namespace std;
#define take_input freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
const ll mod = 1e9+7;
const ll n=1e5+3;
ll dp[n];
ll go(string &str,ll pos)
{
	if(dp[pos]!=-1)
		return dp[pos];
	if(pos==str.length())
		return 1;
	if(str[pos]=='0')
		return 0;
	ll res=go(str,pos+1);
	if(pos+1<str.length() and (str[pos]=='1' or (str[pos]=='2' and str[pos+1]<='6')))
		res=(res+go(str,pos+2))%mod;
	if(res<0)
		res+=mod;
	return dp[pos]=res%mod;
}
int main()
{
	fast;
	// take_input;
	string str;
	cin>>str;
	memset(dp,-1,sizeof(dp));
	cout<<go(str,0);
}
