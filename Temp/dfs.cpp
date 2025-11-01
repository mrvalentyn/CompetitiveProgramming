#include <bits/stdc++.h>
using namespace std;
int di[4]={0,0,-1,1};
int dj[4]={-1,1,0,0};
#define da "YES"
#define nu "NO"
#define nmax 100
/**
	niv - apel intial 1
	niv[i] = nivelul fiecarui nod in arborele de acoperire cu radacina
	de unde am plecat cu cautarea

**/

void dfs(int nod, int niv) {
	//aici intru in nod coborand din parintele sau

	viz[nod] = 1;
	//putem tine intr-o stiva lantul de la radacina la lantul curent
	//putem construi un vector de tati al arborelui dfs
	
	for (int i=0;i<L[nod].size();i++) {
		int vecin = L[nod][i];
		if (viz[vecin] == 0){
			//inainte de a cobori in fiu
			
			dfs(vecin, niv+1);
			
			//cand revin, loc util pentru probleme DP
			//consideram informatia din fiu calculata si o putem\
			//folosi pentru nod
		}
		
	}
	//am terminat de procesat toti fii din nod si revin in nod
	//pot folosi aici informatiile despre toti fii, existente la forma finala
}


int main(){
		dfs(1,1);
	 
	return 0;
	
	
}
