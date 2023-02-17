/*
github: mrvalentyn
*/


#include <bits/stdc++.h>
using namespace std;
ifstream f("forus.in");
ofstream g("forus.out");
bool pos(int x){///c == 1
    while(x){
        if(x % 10 == 0) return false;
        x /= 10;
    }
    return true;
}

int kdiv(int x){
    int ret = 1;
    int d = 2, p;
    while(x > 1){
        p = 0;
        while(x % d == 0){
            x /= d;
            p++;
        }
        if(p) ret *= (p + 1);
        ++d;
        if(x > 1 && d * d > x) d = x;
    }
    return ret;
}
int p10(int N){
    int ret = 1;
    for(int i = 1; i <= N; ++i) ret *= 10;
    return ret;
}

int main(){
    int n, c;
    f >> c;
    if(c == 1){
        f >> n;
        int x;
        int ans = 0;
        for(int i = 1; i <= n; ++i){
            f >> x;
            if(pos(x)) ans++;

        }
        g << ans;

    }
    else{
        f >> n;
        int x;
        for(int i = 1; i <= n; ++i){
            f >> x;
            int kc = log10(x), put = p10(kc), xmin = x, dmin = kdiv(xmin);
            //avem lgx permutari circulare spre dreapta
            //varianta cu vector pt memorarea cifrelor este ineficienta
            for(int i = 1; i <= kc; ++i){
                x = (x % put * 10) + x / put;
                if(x / put != 0){
                    //verificam lg put > lg x, caz in care revenim la
                    //restrictia de taiere, caz pe care il vom ignora
                    int dcx = kdiv(x);
                    if(dcx < dmin){
                        dmin = dcx;
                        xmin = x;
                    }
                    else if(dcx == dmin && xmin > x) xmin = x;
                }
           }
           g << xmin << ' ';
        }
    }
    f.close();
    g.close();
    return 0;
}

