#include <bits/stdc++.h>
using namespace std;
int di[4]={0,0,-1,1};
int dj[4]={-1,1,0,0};
#define da "YES"
#define nu "NO"
#define nmax 100
int aint[4*nmax];
int v[nmax];
//arbore de intervale pentru maxim pe secvente
/**
AIB 1d
enunt: se da un sir a de n valori, initial toate nule. Asupra lui
		se pot efectua operatii de doua tipuri: marirea elementului de pe pozitia
		p cu x, respectiv pentru interogarea pentru suma a secventei de la pozitia 
		st la pozitia dr 

**/
int query(int p){
	int r=0;
	for(int i=p;i;i-=(i&-i))
		r+=a[i];
	return r;
}
void update(int p,int x){
	///i va ajunge indicele de final al fiecarui interval 
	///care contine  pozitia p (dintre cele necesare aib-ului)
	for(int i=p;i<=n;i+=(i&-i))
		a[i]+=x;
	//semnificatie:daca am marit cu x un element al lui v,
	///creste cu val suma din orice interval al aib-ului care contine elementul marit cu x
}

/**
AIB 2d
Avem o matrice cu n linii si m coloane care initial are toate elementele nule.
Asupra sa se aplica update(i,j,x):elementul de pe pozitia (i,j) creste cu x
si operatia query(is,js,ij,jj): suma din submatricea cu coltul st-sus(is,js)
si coltul dr-jos(ij,jj)
**
///query(i,j) da suma (1,1) -> (i,j)
/*int query(int pi, int pj){
	int r=0;
	for(int i=pi;i;i-=(i&-i)){
		for(int j=pj;j<=m;j+=(j&-j))
			r+=a[i][j];
	}
	return r;
}
void update(int pi, int pj, int x){
	for(int i=pi;i<=n;i+=(i&-i)){
		for(j=pj;j<=m;j+=(j&-j)){
			a[i][j]+=x;
		}
	}
	
}*/
int main(){
	
	 
	return 0;
	
	
}
