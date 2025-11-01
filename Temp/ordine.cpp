#include <bits/stdc++.h>
using namespace std;
int di[4]={0,0,-1,1};
int dj[4]={-1,1,0,0};
#define da "YES"
#define nu "NO"
#define nmax 100001
///al k-lea cel mai mic element dintr-un vector cu n=7 elemente
int main(){
	int a[]={1,6,5,4,3,2,7};
	int k;
	cin>>k;
  ///be careful
	nth_element(a,a+7,a+k);
	cout<<a[k+1];
	return 0;
	
	 
	
	
	
}
