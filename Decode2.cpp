#include<bits/stdc++.h>
using namespace std;
#define take_input freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
const ll mod = 1e9+7;
const ll n=1e5+3;
ll dp[n];int x=0;
ll go(string &str,ll pos)
{x++;

	if(pos==str.length())
		return 1;
	if(str[pos]=='0')
		return 0;
	ll res=go(str,pos+1);
	cout<<"R"<<"  "<<res<<" X  :"<<x<<endl;
	if(pos+1<str.length() and (str[pos]=='1' or (str[pos]=='2' and str[pos+1]<='6')))
		res=res+go(str,pos+2);
		cout<<"R2"<<"  "<<res<<" X: "<<x<<endl;
	//if(res<0)
		//res+=mod;
	return res;
}
int main()
{
	fast;
	// take_input;
	string str;
	cin>>str;
	//memset(dp,-1,sizeof(dp));
	cout<<go(str,0);
}
