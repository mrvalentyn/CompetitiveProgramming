#include <fstream>
#include <vector>

#define MAXN 100010

using namespace std;

vector<int> L[MAXN];
ifstream fin ("bfs.in");
ofstream fout("bfs.out");
int c[MAXN], d[MAXN];
int n, m, s, x, y, nod, i, p, u;

int main()
{
    fin>>n>>m>>s;
    for (int i=1;i<=m;i++) {
        fin>>x>>y;
        L[x].push_back(y);
    }

    p = 1;
    u = 1;
    c[1] = s;
    d[s] = 1;
    while (p<=u) {
        nod = c[p];
        for (i=0;i<L[ nod ].size();i++) {
            int vecin = L[ nod ][i];
            if (d[vecin] == 0) {
                u++;
                c[u] = vecin;
                d[vecin] = 1 + d[nod];
            }
        }
        p++;
    }

    for(i=1;i<=n;i++)
        fout<<d[i]-1<<" ";
    return 0;
}
