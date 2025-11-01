#include <bits/stdc++.h>
using namespace std;
int di[4]={0,0,-1,1};
int dj[4]={-1,1,0,0};
#define da "YES"
#define nu "NO"
#define nmax 100
struct muchie{
    int i,j,cost;
};

int n , m , t[101];

muchie x[5000];

int main()
{
    cin >> n >> m;

    for(int i = 0 ; i < m ; ++i)
        cin >> x[i].i >> x[i].j >> x[i].cost;

    //sortare tablou x[] după campul cost
    // ... de completat

    //initializare reprezentanti
    for(int i =1 ; i <= n ; ++i)
        t[i] = i;
      //determinare APM
    int S = 0;
    for(int i = 0 ; i < m ; i ++)
        if(t[x[i].i] != t[x[i].j]) // extremitatile fac parte din subrabori diferiti
        {
            S += x[i].cost;
            //reunim subarborii
            int ai = t[x[i].i], aj = t[x[i].j];
            for(int j =1 ; j <= n ; ++j)
                if(t[j] == aj)
                    t[j] = ai;
        }
    cout << S << "\n";
    return 0;
}
