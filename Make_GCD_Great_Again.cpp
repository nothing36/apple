//  ॐ
/*Shree Krisna*/
/*It's a journey, so enjoy your journey->2*/
/*Prodip sarker(nothing36)*/
#include<bits/stdc++.h>
using namespace std;
#define bn begin()
#define en end()
#define nl "\n"
#define mx 2000100
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
int main()
{
	fast;
	ll tc,n,i,j,k,a,b;
	cin>>tc;
	for(int l=1;l<=tc;l++)
	{
        cin>>n;
        vll v;
        ll x=0;
        ll two=0,three=0;
        for(i=0;i<n;i++)
        {
            cin>>a;
            x=__gcd(x,a);
            if(a%2)
            {
                two+=((2*a)+1);
            }
            if(a%3!=0)
            {
                k=a+(3-a%3);
                three+=((k+a)*(abs(k-a)));
            }
        }
    cout<<"Case "<<l<<": ";
    if(x>1) cout<<"0 "<<x<<endl;
    else if(two>=three) cout<<three<<" "<<"3"<<endl;
    else cout<<two<<" "<<"2"<<endl;
	}

	return 0;
}
