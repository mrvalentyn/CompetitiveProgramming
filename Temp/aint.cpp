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

void build(int nod, int st, int dr){
	if(st==dr)aint[nod]=v[st];
	else{
		int mid=(st+dr)/2;
		build(nod*2,st,mid);
		build(nod*2+1,mid+1,dr);
		aint[nod]=max(aint[2*nod],aint[2*nod+1]);
		
	}
}
void update(int nod ,int st, int dr, int pos, int x){
	if(st==dr)aint[nod]=x;
	else{
		int mid=(st+dr)/2;
		if(pos<=mid)update(2*nod,st,mid,pos,x);
		else update(2*nod+1,mid+1,dr,pos,x);
		
		aint[nod]=max(aint[2*nod],aint[2*nod+1]);
	}	
}

int query(int nod, int st, int dr, int qst, int qdr){
	if(qst<=st && dr<=qdr)return aint[nod];
	else{
		int mid=(st+dr)/2;
		if(qst<=mid)return query(2*nod,st,mid,qst,qdr);
		if(mid+1<=qdr)return query(2*nod+1,mid+1,dr,qst,qdr);
		
	}
	
}

int main(){
	
	 
	return 0;
	
	
}
