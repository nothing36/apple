//  ॐ
/*Shree Krisna*/
/*It's a journey, so enjoy your journey->2*/
/*Prodip sarker(nothing36)*/
#include<bits/stdc++.h>
using namespace std;
#define bn begin()
#define en end()
#define nl "\n"
#define mx 5000010
#define mod 100000007
#define pb push_back
#define LB lower_bound
#define PI (2.0*acos(0.0))
#define al(a) a.begin(),a.end()
#define ral(a) a.rbegin(),a.rend()
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL)
typedef long long int ll;
typedef vector<int>  vi;
typedef vector<ll>   vll;
bool arr[mx];
vll prime;
void sieve()
{
memset(arr,true,sizeof(arr));
arr[1]=false;
for(ll i=2;i<=mx;i++)
{
	for(ll j=2;i*j<=mx;j++)
	{
		arr[i*j]=false;
	}
}
for(ll i=1;i<=mx;i++)
{
	if(arr[i]) prime.pb(i);
}
}
int main()
{
	fast;
	sieve();
	ll tc,n,i,j,k,a,b;
	while(cin>>n)
	{
		if(n==0) break;
		set<ll> st;
		map<ll,ll> mp;
		for(i=1;i<=n;i++)
		{
			ll x=i;
			ll tmp=x,cnt=0;
			for(j=0;prime[j]*prime[j]<=tmp;j++)
			{
				cnt=0;
				while(x%prime[j]==0)
				{
					st.insert(prime[j]);
					cnt++;
					x/=prime[j];
				}
				mp[prime[j]]+=((n-i+1)*cnt);
			}
			if(x!=1){
				mp[x]+=(n-i+1);
				st.insert(x);
			}
		}
		ll ans=1;
		for(auto it=st.bn;it!=st.en;it++)
		{
			k=*it;
			ans=((ans*(mp[k]+1))%mod);
			ans%=mod;
		}
		cout<<ans<<endl;
	}

	return 0;
}
