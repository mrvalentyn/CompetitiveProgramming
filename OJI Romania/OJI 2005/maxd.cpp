///solution written by mrvalentyn

#include <fstream>
using namespace std;
ifstream f("maxd.in");
ofstream g("maxd.out");

int nrdiv(int n)
{
        int rez=1;
        int p,d;
        d = 2;
        while(n>1)
        {
            p=0;
            while(n%d==0)
            {
                p++;
                n/=d;
            }
            rez*=(p+1);
            d++;
            if(d*d>n) d=n;
        }
        return rez;

}




int main()
{
    int a, b, nrmax, imax, ct;
    f >> a >> b;
    nrmax = 0; ct = 0;
    for(int i=a;i<=b;i++)
    {
        int nrd=nrdiv(i);
        if(nrd>nrmax)
        {
            nrmax=nrd;
            imax=i;
            ct=1;
        }
        else if(nrd==nrmax)  ct++;
    }
    g<<imax<<" "<<nrmax<<" "<<ct;
    return 0;
}
