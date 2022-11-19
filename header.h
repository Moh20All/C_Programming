#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include<stdio.h>
//reel
          int k,res,n=0,m,a,b,p,i,temp,sw,x,y,SIZE=10,index,tmp,s=0,GCD = 0;
          // Array declaration
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

//Multi compatible

int multi(int a,int b){
m=0;
for(i=1;i<=b;i++){
    if(i%a==0){
            m=m+1;
        printf("Un multiple : %d \n",i);
    }
   }

}
//PGCD
   GetGCD ( int x, int y)
{

    while (y != 0)
    {
        if ( x > y)
        {
            x = x - y;
        }
        else
        {
            y = y - x;
        }
    }
    return x;
}
// Array

int table (){
              int arr[n];
 for(i=1;i<=n;i++){
    printf("entrer la valeur de arr[%d]] : ",i);
    scanf("%d",&arr[i]);
    s=s+arr[i];
}

return s;

}
// Array TroOoooveR

int trouve (){
    a=0;
    int arr[n];
 for(i=1;i<=n;i++){
    printf("entrer la valeur de arr[%d] : ",i);
    scanf("%d",&arr[i]);
}
for(i=1;i<=n;i++){
    if(m==arr[i]){
        a=1;
        break;
    }
    else{
a=0;
    }

}
return a;
}

//decalage un tableau

void decal(){
int t[n];
for(i=1;i<=n;i++){
    printf("entrer la valeur  de arr[%d] : ",i);
    scanf("%d",&t[i]);
}
printf ("avant la decalage :");
printf ("|");
  for(i=1; i<=n; i++)
        {
        printf("\t%d", t[i]);
        }
        for (i=2;i<=n;i++)
        {
            temp=t[i];
            t[i]=t[i-1];
            t[i-1]=temp;
        }
        printf ("|");
        printf ("\n");
printf ("apres la decalage :");

printf ("|");
    for(i=1; i<=n; i++)
        {
        printf("\t%d", t[i]);
        }
        printf ("|");


 }


void selection(){
    int tab[n];
    for(i=0;i<n;i++){
printf("entrer la valeur  de Tab[%d] : ",i+1);
       scanf("%d",&tab[i]);
       }

   //affiiher les éléments du tableau
   printf("Avant le trie  :\n");
   for (i=0; i < SIZE; ++i)
   {
      printf("%4d", tab[i]);
   }

  for (i=0; i < (SIZE-1); i++)
  {
    index = i;

    for (k=i + 1; k < SIZE; k++)
    {
      if (tab[index] > tab[k])
        index = k;
    }
    if (index != i)
    {
      tmp = tab[i];
      tab[i] = tab[index];
      tab[index] = tmp;
    }
  }
 printf("\n------- tableau triee par ordre croissant ------\n");
for (i=0; i < SIZE; i++){
       printf("%4d", tab[i]);
}
}




#endif // HEADER_H_INCLUDED
