///github:qvalentin
///updated solution(100pts)

#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long
#define intmx INT_MAX
#define in ifstream f
#define out ofstream g
///
int n,v[4001],a[4001];
set<int> kd;
int srt(int x){
    int f[10]={0};
    while(x){
        ++f[x%10];
        x/=10;
    }
    int ret=0;
    for(int i=1;i<=9;++i){
        for(int j=1;j<=f[i];++j)ret=ret*10+i;
    }
    for(int i=1;i<=f[0];++i)ret*=10;
    return ret;
}


int main(){
    in("pluton.in");
    out("pluton.out");
    f>>n;
    for(int i=0;i<n;++i){
        f>>v[i];
        a[i]=srt(v[i]);

    }
    sort(a,a+n);
    //for(int i=1;i<=n;++i)g<<a[i]<<' ';
    //g<<endl;
    int y=0;
    for(int i=0;i<n;++i){
        kd.insert(a[i]);
        if(a[i]!=a[i-1])++y;
    }
    g<<kd.size()<<'\n';
    int l=1,lmx=-1,x;

    for(int i=y=0;i<n;++i){
        if(a[i]!=a[i-1])l=1;
        else{
            ++l;
            if(l>lmx){
                lmx=l,x=a[i],y=0;
            }
            if(l==lmx)++y;
        }
    }
    g<<lmx<<'\n'<<y<<'\n';

    for(int i=0;i<n;++i){
        if(srt(v[i])==x) g<<v[i]<<' ';
    }
    f.close();
    g.close();
    return 0;

}
