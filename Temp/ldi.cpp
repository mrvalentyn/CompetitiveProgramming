#include<bits/stdc++.h>
using namespace std;
struct ldi{
    int info;
    ldi* next;
    ldi* prev;
};

void addstart(nod* &ls,int x){
    ldi* aux=new ldi;
    aux->info=x;
    aux->prev=NULL;
    aux->next=NULL;
    if(!ls)ls=aux;
    else{
        ls->prev=aux;
        aux->next=ls;
    }
}

void addafter(ldi* x, int vl){
    ldi* aux=new ldi;
    aux->info=vl;
    aux->next=x->next;
    x->next=aux;
    aux->next->prev=aux;
    aux->prev=x;
}
void addend(ldi* ls,int x){
    ldi* aux=new ldi;
    aux->info=x;
    aux->next=NULL;

    ldi *i=ls;
    while(i->next)i=i->next;
    i->next=aux;
    aux->prev=i;
}
void del(ldi* &ls,ldi* &x){
    if(x==ls){
        ls=ls->next;
        ls->prev=NULL;
    }
    else{
        ldi* i=ls;
        while(i->next!=x)i=i->next;
        i->next=x->next;
        x->next->prev=x->prev;
        delete x;
    }
}
void afis(ldi* ls){
    while(ls){
        cout<<ls->info<<' ';
        ls=ls->next;
    }
    cout<<'\n';
}

int main(){

    //del lista
   // ls=NULL;
    return 0;
}


