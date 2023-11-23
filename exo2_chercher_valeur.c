// Oualid Hamri G3 q2
// pour compiler ce fichier avec gcc utiliser cet instruction : gcc exo2_chercher_valeur.c
// pour exécuter le programme sur cmd écrire : .\a.exe 
//la boucle s'exécute pas correctement des fois ..  reste juste un essai
#include <stdio.h>
#define maximum 100

int chercher(int t[maximum],int n,int val){
     if (n == 0 && t[n] != val) {
        return  0;
    } else if (t[n] == val) {
        return 1;
    } else {
        return chercher(t,n-1,val);
}

}

int main() {
int t[10],val,i,n;
char c = 'o'; //  pour arréter la boucle
printf("Entrer le nombre des unitées de tableau  :");
scanf("%d",&n);
for (i= 0 ; i<n ; i++){
        printf("Saisir t[%d] = ",i);
        scanf("%d",&t[i]);
}
while(c != 'n'){
printf("Entrer la valeur pour rechercher  :");
scanf("%d",&val);
if(chercher(t,n,val) ==1){
    printf("Le nombre ( %d ) existe dans le tableau\n",val);
}
else {
    printf("(-_-)  erreur Le nombre ( %d ) n'existe pas dans le tableau \n",val);
    
}
printf("Recherche une autre valeur?? entrer 'o' pour oui et 'n' pour non : ");
scanf("%s",&c);
}
printf("\nmerci d'esayer le programme!");

}

/* sans boucle 
#include <stdio.h>
#define maximum 100

int chercher(int t[maximum],int n,int val){
     if (n == 0 && t[n] != val) {
        return  0;
    } else if (t[n] == val) {
        return 1;
    } else {
        return chercher(t,n-1,val);
}

}

int main() {
int t[10],val,i,n;
char c = 'o'; //  pour arréter la boucle
printf("Entrer le nombre des unitées de tableau  :");
scanf("%d",&n);
for (i= 0 ; i<n ; i++){
        printf("Saisir t[%d] = ",i);
        scanf("%d",&t[i]);
}

printf("Entrer la valeur pour rechercher  :");
scanf("%d",&val);
if(chercher(t,n,val) ==1){
    printf("Le nombre ( %d ) existe dans le tableau\n",val);
}
else {
    printf("(-_-)  erreur Le nombre ( %d ) n'existe pas dans le tableau \n",val);
    
}
printf("\nmerci d'esayer le programme!");
return 0 ; 

}
*/


