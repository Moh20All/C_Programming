
#include<stdio.h>
#include "header.h"

int main(){
    int tab[n];

    printf("----------------------- \n");
    printf("dans cette programm il ya 10 program :\n");
    printf("----------------------- \n");
    printf("1- Pour trouver la partie entier de nombre reel .\n");
    printf("----------------------- \n");
    printf("2- Pour consulter as que la mois a 30 ou 31 jour.\n");
    printf("----------------------- \n");
    printf("3- Pour acceder a multiplication avec la addition successive .\n");
    printf("----------------------- \n");
    printf("4- Pour trouver la fractional de nombre .\n");
    printf("----------------------- \n");
    printf("5- Pour trouver les multiples de a qui sont inferieur a un nombre . \n");
    printf("----------------------- \n");
    printf("6- Pour trouver le PGCD de deux nombre . \n");
    printf("----------------------- \n");
    printf("7- Pour calculer la somme de votre table personalise . \n");
    printf("----------------------- \n");
    printf("8- Pour tester il'ya un valeur egale m dans votre table personalise . \n");
    printf("----------------------- \n");
    printf("9- Pour decale votre table personalise . \n");
    printf("----------------------- \n");
    printf("10- Pour triee votre table personalise par un ordre croissante . \n");
    printf("----------------------- \n");
    printf("veuillez Entrer la reponse :");




    scanf("%d",&sw);
    printf("\n");

   switch(sw){

       case 1:
           printf("----------------------- \n");
           printf("Entrer un nombre reel : \n");
           scanf("%f",&j);
           //res=sous(a);
           res=soustracion(j);
           printf("-----------\n");
           printf("La partie entier de cette nombre est : ");
           printf("%d \n",res);
           printf("----------------------- \n");

    break;

       case 2:
               printf("----------------------- \n");
               printf("-----Entrer la nombre de mois :");
               //enter between 1-12 (loop)
               scanf("%d",&m);
               if(m<1||m>12){
             do{
                    printf("erreur \nentrer un nombre de mois:");
                    scanf("%d",&m);
               } while(m>12);
                    }
                        if(Mois(m)==1){
                          printf("-----Cette mois a 31 jours-----\n");
                                      }
                                  else{
                                         printf("-----Cette mois a 30 jours-----\n");

                                      }
                printf("----------------------- \n");

   break;
       case 3:
            printf("Entrer la nombre a : \n");
            scanf("%d",&a);

            printf("Entrer la nombre b : \n");
            scanf("%d",&b);

            printf("------------------------------- \n");

            printf("La multiplication avec laddition successive est %d \n",add(a,b));
            printf("------------------------------- \n");

   break;
       case 4:

       printf("veuillez avez entrer la nombre :");
       scanf("%d",&n);
       printf("----------------------- \n");
       printf("la nombre fractional de %d est : %d \n",n,fun(n));
       printf("----------------------- \n");
   break;

       case 5:
        printf("veuillez avez entrer la nombre a :");
        scanf("%d",&a);
        printf("veuillez avez entrer la nombre maximum des multipleur :");
        scanf("%d",&b);
        printf("----------------------- \n");
        multi(a,b);
        printf("les multiples sont : %d \n",m);
        printf("----------------------- \n");
   break;

       case 6:
            printf ( "veuillez avez entrer la nombre x :");
            scanf ("%d", &x);
            printf ( "veuillez avez entrer la nombre y:");
            scanf ("%d", &y);
            printf("----------------------- \n");
            GCD = GetGCD( x, y);
            printf ( " Le PGCD de nombre %d et %d est: %d \n", x, y, GCD);
            printf("----------------------- \n");
   break;

       case 7:

       printf("Entrer la taille de tableau :");
       scanf("%d",&n);
       table();
       printf("\nla somme de cette tableau : %d\n",s);

    break;

       case 8:

       printf("Entrer la taille de tableau :");
       scanf("%d",&n);
       printf("entrer la valeur de m :");
       scanf("%d",&m);
       printf("\n");
       a=trouve();
       printf("%d \n",a);
       if (a==1)
       printf("il'ya valeur egale m.");

       if (a==0)
        printf("il'na pas un valeur egale m");


    break;

       case 9:

       printf("Entrer la taille de tableau :");
       scanf("%d",&n);

       decal();



    break;
       case 10:

       printf("Entrer la taille de tableau :");
       scanf("%d",&n);
       SIZE=n;
      // printf("%d", n);
      // printf("%d", SIZE);


       selection();









    break;

       default:
               printf("----------------------- \n");

        printf("erreur reasseay plus tard \n");
            printf("----------------------- \n");













   }








return 0;

}
