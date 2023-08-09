//by mrvalentyn

#include <bits/stdc++.h>
using namespace std;
ifstream f("oneout.in");
ofstream g("oneout.out");
int lp[1000001];
int v[1000001];
int n, c;
int mx = -1;
void citire()
{
    f >> c >> n;
    for(int i = 1; i <= n; i++){
        f >> v[i];
        mx = max(mx, v[i]);
    }

}
void constr(){
    for(int i = 2; i * i <= mx; ++i){
        for(int j = i * i; j <= mx; j += i * i) lp[j] = 1;
    }
}
void s1(){
    int ans = 0;
    for(int i = 1; i <= n; i++)
        if(!lp[v[i]]) ans++;
    g << ans;
}
void s2(){
    int l , lmax = -1, klmax = 0, start, sf;
    int ne = 0;
    for(int i = 1; i <= n; i++){
        if(lp[v[i]]){

            int ii = i - 1, is = i + 1;
            bool gi = false, gf = false;
            while(!lp[v[ii]] && ii >= 1){
                ii--;
                gi = true;
            }
            while(!lp[v[is]] && is <= n){
                is++;
                gf = true;
            }
            if(gi && gf){
                ne++;
                ii++, is--;
                l = is - ii;
                lmax = max(lmax, l);
            }

        }
    }
    if(ne == 0) g << -1;
    else{
            for(int i = 1; i <= n; i++){
            if(lp[v[i]]){
                int ii = i - 1, is = i + 1;
                bool gi = false, gf = false;
                while(!lp[v[ii]] && ii >= 1){
                    ii--;
                    gi = true;
                }
                while(!lp[v[is]] && is <= n){
                    is++;
                    gf = true;
                }
                if(gi && gf){
                    ii++, is--;
                    l = is - ii;
                    lmax = max(lmax, l);
                }

            }
        }
        for(int i = 1; i <= n; i++){
            if(lp[v[i]]){
                int ii = i - 1, is = i + 1;
                bool gi = false, gf = false;
                while(!lp[v[ii]] && ii >= 1){
                    ii--;
                    gi = true;
                }
                while(!lp[v[is]] && is <= n){
                    is++;
                    gf = true;
                }
                if(gi && gf){
                    ii++, is--;
                    l = is - ii;
                    if(l == lmax) klmax++;
                }

            }
        }
        g << lmax << ' ' << klmax << endl;
        for(int i = 1; i <= n; i++){
            if(lp[v[i]]){
                int ii = i - 1, is = i + 1;
                bool gi = false, gf = false;
                while(!lp[v[ii]] && ii >= 1){
                    ii--;
                    gi = true;
                }
                while(!lp[v[is]] && is <= n){
                    is++;
                    gf = true;
                }
                if(gi && gf){
                    ii++, is--;
                    l = is - ii;
                    if(l == lmax) g << ii << ' ' << is << endl;
                }

            }
        }
    }

}

int main(){
    citire();
    constr();
    if(c == 1) s1();
    else s2();
    f.close();
    g.close();
    return 0;
}
