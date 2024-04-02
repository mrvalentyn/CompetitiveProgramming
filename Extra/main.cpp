/*All my macros placed inside a .cpp file,
so I won't waste any time by writing all of this*/
//github:mrvalentyn
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define intmx INT_MAX
#define in ifstream f
#define out ofstream g
#define close f.close(); g.close();
#define FOR(1,n) for(int i=1;i<=n;++i)
#define FOR(0,n) for(int i=0,i<n;++i)
//BST node
struct bst{
    int info;
    bst *st;
    bst *dr;
} 
//trie node
struct trie{
    trie* ch[26]//children
    bool end;//end of word? 
} 
//new trie node
struct trie *getNode(void){
    trie *pNode=new trie;
    pNode->end=false;
    for(int i=0;i<26;++i){
        pnode->ch[i]=NULL;
    } 
    return pNode;
} 
//if not present, inserts key(info) into trie
//if the key is prefix of trie node,
//just marks leaf node. 
void insert(trie *root, string info){
    trie *pCrawl=root;
    for(int i=0;i<info.length();++i){
        int ind=info[i]-'a';
        if(!pCrawl->ch[ind])
            pCrawl->ch[ind]=getNode();
        pCrawl=pCrawl->ch[ind];
    }
    //mark last node as leaf
    pCrawl->end=true;
    
} 
//Search key info into trie
bool search(trie *root, string info){
    trie pCrawl=root;
    for(int i=0;i<key.length();++i){
        int ind=key[i]-'a';
        if(!pCrawl->ch[ind])return false;
        pCrawl=pCrawl->ch[ind];
    
    }
    return pCrawl->end;


} 



int bins(int x, int A[]){
    int N=sizeof(A)/sizeof(A[1]);
    int i,step;
    for(step=1,step<n,step<<=1);
    for(i=0;step;step>>=1)
        if(i+step<N&&A[i+step]<=x)i+=step;
    return i;

}


int main(){
    return 0;

}
    