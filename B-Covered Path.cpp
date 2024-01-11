#include<bits/stdc++.h>
#include<string>
using namespace std;
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
    int v1=0,v2=0;
    cin>>v1>>v2;
    int t=0,d=0;
    cin>>t>>d;
    int ans=0;
    int x=v1;
    vector<int>v;
    v.push_back(x);
    for(int i=1;i<t-1;i++){
        x+=d;
        v.push_back(x);
    }
    if(abs(v.back()-v2)<=d){
        ans=v2;
        for(auto it:v){ans+=it;}
        cout<<ans<<endl;
    }
    else{
        v.back()=v2+d;
        for(int i=v.size()-2;i>=1;i--){
            if(abs(v[i]-v[i+1])<=d)break;
            else{
                v[i]=v[i+1]+d;
            }
        }
        ans=v2;
        for(auto it:v){ans+=it;}
        cout<<ans<<endl;
    }
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
