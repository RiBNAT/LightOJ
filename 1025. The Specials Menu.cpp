

 
// Tanbir Ahmed   <<  RiBNAT  >>      //
// University of Barisal, Bangladesh  //
 
 
 
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define     fast            ios_base::sync_with_stdio(false);cin.tie(NULL)
#define     input           freopen("input.txt", "r", stdin)
#define     output          freopen("output.txt", "w", stdout)
#define     in1(X)          scanf("%lli",&(X))
#define     ins(S)          scanf("%s",(S))
#define     out(X)          printf("%lli",(X))
#define     outs(S)         printf("%s",(S))
#define     Pnl             printf("\n")
#define     End             return 0
#define     ll              long long int
#define     Pair            pair<ll,ll>
#define     F               first
#define     S               second
#define     all(v)          v.begin(),v.end()
#define     mem(a,v)        memset(a,v,sizeof(a))
#define     Max             1000000000000000014
#define     Min             -1000000000000000014
#define     mod             /*998244353 //1000004119  /*/1000000007 // 1000000000000000009 // 29996224275833
#define     range           1000007
#define     pb              push_back
#define     Vector          vector<ll>
#define     mp              make_pair
#define     PI              3.14159265358979323846 // acos(-1)  // 2.0 * acos(0.0)
#define     min_heap        priority_queue <ll, vector<ll>, greater<ll> > //.top() .push() .pop() .size()
#define     ordered_set     tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>  //*(x.find_by_order(k)),x.order_of_key(k)
 
/*************** #Template FUNCTIONS# **************/
 
 ll pc;void PrintCase(){printf("Case %lli: ",++pc);}
 ll GCD(ll a,ll b){if(a<0) a*=-1;if(b<0) b*=-1;if(a<b)swap(a,b);if(b==1) return 1;if(!b) return a;if(!(a%b)) return b;else return GCD(b,a%b);}
 ll LCM(ll a,ll b){ll x=GCD(a,b);return (a/x)*b;}
 ll bigmod(ll n,ll p){if(p==0) return 1;if(p==1)return (n+mod)%mod;if(p%2)return (bigmod(n,p-1)*n+mod)%mod;else{ll x=bigmod(n,p/2);return (x*x+mod)%mod;}}
 ll power(ll n,ll p){if(p==0) return 1;if(p==1)return n;if(p%2)return power(n,p-1)*n;else{ll x=power(n,p/2);return x*x;}}
 ll modinverse(ll n){return bigmod(n,mod-2)%mod;}
// ll Check(ll n,ll i){return (n&(1LL<<i));}
// ll Set(ll n,ll i){return (n|(1LL<<i));}
// ll status[(ll)range/64+5];Vector primes;void sieve(){for(ll i=3;i<=sqrt(range);i+=2){if(Check(status[i/64],i%64)==0){for(ll j=i*i;j<range;j+=2*i){status[j/64]=Set(status[j/64],j%64);}}}primes.pb(2);for(ll i=3;i<range;i+=2)if(Check(status[i/64],i%64)==0)primes.pb(i);}
 
 
// ll dx[] = {-2, -1, 1, 2,  2,  1, -1, -2};
// ll dy[] = { 1,  2, 2, 1, -1, -2, -2, -1};
 
// ll X[]= {0,0,1,-1,1,1,-1,-1};
// ll Y[]= {1,-1,0,0,1,-1,1,-1};
 
    #define check(n,pos)  (n & (1<<pos))
    #define setup(n,pos)  (n | (1<<pos))
//    #define unset(n,pos)  (n & !(1<<pos))
//  bool chk(ll mask) {return (bool)(mask & ((1<<10)-1))}; //if last 10 bit of mask is on, then return true. otherwise return false
 
/********************** F-King Start **********************/



string s;
ll dp[62][62];


ll solve(ll st, ll ed){
    if(st==ed) return 1;
    if(ed<st) return 0;
    if(dp[st][ed]!=-1) return dp[st][ed];

    if(s[st]==s[ed]){
        dp[st][ed]=1+solve(st+1, ed)+solve(st,ed-1);
        return dp[st][ed];
    }else{
        dp[st][ed]=solve(st+1,ed)+solve(st,ed-1)-solve(st+1,ed-1);
        return dp[st][ed];
    }

}




int main(){
    ll t;
    cin>>t;
    while(t--){
        cin>>s;
        mem(dp,-1);

        ll ans=solve(0,s.size()-1);
        PrintCase();
        cout<<ans<<endl;
    }
}


 
/********************** Happy F-King **********************/
 
 
 
