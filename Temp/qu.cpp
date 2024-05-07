#include<bits/stdc++.h>
using namespace std;
struct qu{
    int info;
    qu* next;
};
void del(qu* &q){
    nod* aux=q;
    q=q->next;
    delete aux;
}
void add(qu* q, int x){
    nod* i=q;
    while(i->next)i=i->next;
    qu* aux=new qu;
    aux->info=x;
    aux->next=NULL;
    i->next=aux;
}
int main(){
    //del qu
    //q=NULL;
    return 0;
}
