///Solution written by mrvalentyn
/**
- Use a frequence array to track every value that appears in the matrix
- Search all the values that appears 0 times in the freq. array and use mn and mx to 
store the minimum and the maximum value that has been destroyed in the matrix with the integer '0'
**/


#include <fstream>
using namespace std;
ifstream f("numere9.in");
ofstream g("numere9.out");
int ap[250001];
int a[501][501];
int n;
int mn = 0, mx;
void init()
{
    f >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++) f >> a[i][j];
    }
    for(int i = 1; i <= n * n; i++) ap[i] = 0;
}
void rez()
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(a[i][j] != 0) ap[a[i][j]]++;
        }
    }
    for(int i = 1; i <= n * n; i++)
    {
        if(ap[i] == 0)
        {
            mn = i;
            break;
        }
    }
    for(int i = 1; i <= n * n; i++)
    {
        if(ap[i] == 0) mx = i;
    }
    
    g << mn << " " << mx;
}
int main()
{
    init();
    rez();
    f.close();
    g.close();
    return 0;
}
