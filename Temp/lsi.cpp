#include<bits/stdc++.h>
using namespace std;
struct lsi{
    int info;
    lsi* next;
};
void addstart(lsi* &ls, int x){
    lsi* aux=new lsi;
    aux->info=x;
    if(!ls)ls=aux;
    else{
        aux->next=ls;
        ls=aux;
    }

}

void addafter(lsi* x, int vl){
    lsi* aux=new lsi;
    aux->info=vl;
    aux->next=x->next;
    x->next=aux;


}

void addend(lsi* &ls, int x){
    lsi* aux=new lsi;
    aux->info=x;
    aux->next=NULL;
    if(!ls)ls=aux;
    else{
        lsi* i=ls;
        while(i->next)i=i->next;
        i->next=aux;
    }
}
void del(lsi* x){
    if(x==ls)ls=ls->next;
    else{
        lsi* i=ls;
        //pp ca x se afla in lista, nu mai verificam i->next!=NULL
        while(i->next!=x)i=i->next;
        lsi* aux=x;
        i->next=aux->next;
        aux->next=NULL;
        delete aux;

    }

}
void afis(lsi* lis){
    while(lis){
        cout<<lis->info<<' ';
        lis=lis->next;
    }
    cout<<'\n';
}


int main(){



    //del lista
    //ls=NULL;
    return 0;
}

