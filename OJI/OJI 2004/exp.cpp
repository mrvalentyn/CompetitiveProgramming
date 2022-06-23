#include <fstream>
#include <cmath>
#define ll long long
using namespace std;
ifstream f("exp.in");
ofstream g("exp.out");

int main(){
    int n, m, ok = 1, put[5000] = { }, x;
    f >> m;
    f >> n;
    for(int i = 1 ; i <= n ; i++)
    {
        f >> x;
        int d = 2;
        while(x > 1)
        {
            int p = 0;
            while(x % d == 0) p++ , x /= d;
            if(p) put[d] += p;
            d++;
            if(d * d > x) d = x;
        }
    }
    for(int i = 2; i < 5000; i++){
        if(put[i] != 0)
            if(put[i] % m != 0) ok = 0;
    }
    if(ok == 0) g << 0 << endl;
    else{
        g << 1 << endl;
        for(int i = 2; i < 5000; i++)
            if(put[i] != 0) g << i << " " << put[i] / m << endl;
    }

    f.close();
    g.close();
    return 0;
}
