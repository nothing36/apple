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
	while(tc--)
	{
       string str; cin>>str;
    n= str.length();
    ll wicket=0;
    ll run=0;
    for(i=0;i<n;i++)
    {
       if(str[i]=='W') wicket++;
       else run+=(str[i]-'0');
    }
    ll x=n/6;
    ll y=n%6;
    if(n<=6) {
        cout<<x<<"."<<y<<" Over ";
    }
    else{
         cout<<x<<"."<<y<<" Overs ";
    }
 if(run<=1) cout<<run<<" Run ";
 else cout<<run<<" Runs ";

  if(wicket<=1) cout<<wicket<<" Wicket.";
 else cout<<wicket<<" Wickets.";
 cout<<endl;

    

	}

	return 0;
}
