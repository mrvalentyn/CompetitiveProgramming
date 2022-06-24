/// 90/100 pts solution(pbinfo)


#include <fstream>
#include <algorithm>
using namespace std;
ifstream f("pluton.in");
ofstream g("pluton.out");

int v[4000], a[4000], n, ct;
int pluton(int n)
{
    int f[10] = {0} , rez = 0;
    while(n) {f[n % 10] ++ ; n /= 10;}
    for(int i = 1 ; i <= 9 ; ++i)
        for(int j = 1 ; j <= f[i] ; ++j)
            rez = rez * 10 + i;
    for(int i = 1 ; i <= f[0] ; ++i) rez *= 10;
    return rez;
}

int main(){
    f >> n;
    for(int i = 0; i < n; i++){
        f >> v[i];
        a[i] = pluton(v[i]);
    }
    ct = 0;
    sort(a, a + n);
    for(int i = 0; i < n; i++)
        if(a[i] != a[i + 1]) ct++;
    g << ct << endl;

    ct = 0;
    int lmax = -1;
    int l = 1;
    int x;

    for(int i = 0; i < n - 1; i++){
        if(a[i] != a[i + 1]) l = 1;
        else{
            l++;
            if(l > lmax){lmax = l, ct = 0, x = a[i];}
            if(l == lmax) ct++;
        }
    }
    g << lmax << endl << ct << endl;
    for(int i = 0; i < n; i++)
        if(x == pluton(v[i])) g << v[i] << ' ';









    f.close();
    g.close();
    return 0;

}
