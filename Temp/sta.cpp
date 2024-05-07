#include<bits/stdc++.h>
using namespace std;
struct sta{
    int info;
    sta* next;
}
void add(sta* &st,int x){
    sta* aux=new sta;
    aux->info=x;
    aux->next=st;
    st=aux;
}
void del(sta* &st){
    nod* aux=st;
    st=st->next;
    delete aux;
}
int main(){
    //del st
    //st=NULL;
    return 0;
}

