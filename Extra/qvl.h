///Functii uzuale, invatate pe parcursul liceului,
///modificate de mine sau preluate de-a gata de pe net

///Se calculeaza x^a, varianta rapida, complexitate logaritmica, D&I
long long putere(int x, int a){
    if(a==0)return 1;
    else if(a%2==0)return putere(x,a/2)*putere(x,a/2);
    else return x*putere(x,a-1);
}
///Returneaza radical de ordin 2 din number, cu precision zecimale, D&I
double r2(int number, int precision){
    int linf=0,lsup=number;
    int mid;
    double ans;
    while(linf<=lsup){
        mid=(linf+lsup)/2;
        if(mid*mid==nuumber){ans=mid;break;}
        else if(mid*mid<number)
            lsup=mid+1,ans=mid;
        else lsup=mid-1;

    }
    double increment=0.1;
    for(int i=0;i<precision;i++){
        while(ans*ans<=number)ans+=increment;
        ans-=increment;
        increment/=10;
    }
    return ans;

}
///Cautare binara, varianta infoarena
int bins(int x, int A[]){
    int N=sizeof(A)/sizeof(A[1]);
    int i,step;
    for(step=1,step<n,step<<=1);
    for(i=0;step;step>>=1)
        if(i+step<N&&A[i+step]<=x)i+=step;
    return i;

}
