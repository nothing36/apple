//  ॐ
/*Shree Krisna*/
/*It's a journey, so enjoy your journey->2*/
/*Prodip sarker(nothing36)*/
#include<bits/stdc++.h>
using namespace std;
#define bn begin()
#define en end()
#define nl "\n"
#define mx 2000
#define mod 1000000007
#define pb push_back
#define LB lower_bound
#define PI (2.0*acos(0.0))
#define al(a) a.begin(),a.end()
#define ral(a) a.rbegin(),a.rend()
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL)
typedef long long int ll;
typedef vector<int>  vi;
typedef vector<ll>   vll;
vll prim;
void sieve()
{
       bool prime[mx + 1]; 
    memset(prime, true, sizeof(prime)); 
    for (int p = 2; p * p <= mx; p++) { 
        if (prime[p] == true) { 
            for (int i = p * p; i <= mx; i += p) 
                prime[i] = false; 
        } 
    } 
    for(int i=2;i<=mx;i++)
    {
        if(prime[i]) prim.pb(i);
    }
}
int main()
{
	fast;
	ll tc,n,i,j,k,a,b;
    sieve();
	cin>>tc;
	while(tc--)
	{
        cin>>n>>k;
        vll v;
for(i=0;i<n;i++)
{
 cin>>a; v.pb(a);
}
cout<<prim.size()<<endl;
// map<ll,vll> mp;
map<ll,ll> mp;
ll gc=0,x;
i=0,j=0;
while(j<n)
{
    x=v[j];
    gc=__gcd(gc,x);
    for(k=0;prim[k]*prim[k]<=x;k++)
    {
        if(x%prim[k]==0)
        {
            mp[prim[k]]++;
        }
    }
    
}
  
	}

	return 0;
}
