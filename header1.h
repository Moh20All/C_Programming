#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include<stdio.h>
//reel
          int k,res,n,m,a,b,p,i,sw;
          float j;
int soustracion(int j){
   while(j!=0){
   j=j-1;
   k=k+1;
   }
return k;
}
//Mois

int Mois(int a){
  if(a==1||a==3||a==3||a==5||a==7||a==8||a==10||a==12){
    return 1;
  }
  else{
    return 0;
  }


}
//multiplication

int add(int a,int b){

   for(i=1;i<=b;i++){
    p=p+a;
   }

return p;}

//fractional


int fun(int n){
if(n==1){
    return 1;
}
else{
    return n*fun(n-1);
}
}



#endif // HEADER_H_INCLUDED
