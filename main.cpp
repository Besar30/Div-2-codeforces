#include<bits/stdc++.h>
#include<string>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
// find_by_order, order_of_key
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> oset; // find_by_order, order_of_key
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> omset;
#define int long long
#define endl '\n'
#define ll long long
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pi pair<ll,ll>
#define f first
#define s second
#define INF 100000000000009
#define Beso ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0)
int oo=INF;
const int N=1e5+5;
vector<bool>PEIMRE(N,1);
// cout<<setprecision(11);
// sum= n*(n+1)/2;
void _r(){
    // for (int i = 0; i < n / 2; i++){
    //     for (int j = i; j < n - i - 1; j++){
    //        (a[i][j]==0)
    //        (a[n - 1 - j][i]==0)
    //        (a[n - 1 - i][n - 1 - j])
    //        (a[j][n - i - 1]==0)
    //     }
    // }
}
//******************************************************************************************************
bool isprime(int n){
    if(n==1)return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int Euclidean(int a,int b){
    while(b!=0){
        int x=a;
        a=b;
        b=x%b;
    }
    return a;
}
int Lcm (ll a, ll b){
    return (a / Euclidean(a, b))*b;
}
void sieve(){
    //N*log(N)
    PEIMRE[1]=PEIMRE[0]=0;
    for(int i=2;i*i<N;i++){
        if(PEIMRE[i]){
            for(int o=i*i;o<N;o+=i){
                PEIMRE[o]=0;
            }
        }
    }
}
int Gcd (int x, int y) {
    if (y == 0)
        return x;
    else
        return Gcd (y, x % y);
}
int fast_power(int x,int mx){
    int result=1;
    while(mx>0){
        if(mx%2==1)result=result*x;
        x=x*x;
        mx/=2;
    }
    return result;
}
int power(int n,int m){
    //log(m)
    if(m==0){
        return 1;
    }
    if(m==1)return n;
    int res=power(n,m/2);
    if(m%2==1){
        return ((res*res)*n);
    }
    else{
        return (res*res);
    }
}
int strTOint(string ss){
    int num=0;
    stringstream s;
    s<<ss;
    s>>num;
    return num;
}
bool is_powerof2(int n){
    return ((n&(n-1))==0 ? true : false);
}
vector<int> vv(int b){
    vector<int>v;
    for(int i=2;i*i<=b;i++){
        while(b%i==0){
            v.push_back(i);
            b/=i;
        }
    }
    if(b!=1)v.push_back(b);
    return v;
}
void interstaller(){
    int n=0;
    cin>>n;
    vector<pair<int,bool>>v;
    for(int i=0;i<n;i++){
        int x=0,y=0;cin>>x>>y;
        v.push_back({x,true});
        v.push_back({y,false});
    }
    sort(all(v));
    int ans=0;
    int con=0;
    for(int i=0;i<v.size();i++){
        if(v[i].s)ans++;
        else ans--;
        con=max(con,ans);
    }
    cout<<con<<endl;
}
int32_t main(){
#ifndef ONLINE_JUDGE
    freopen("Input.txt","r",stdin);
    freopen("Output.txt","w",stdout);
#endif
    Beso;
    int T=1;
//    cin>>T;
    while(T--){
        interstaller();
    }
    // **********************************************************************************************
}