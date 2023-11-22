// Oualid Hamri G3 q1
// pour compiler ce fichier avec gcc utiliser cet instruction : gcc exo1_somme_recursive.c
// pour exécuter le programme sur cmd écrire : .\a.exe
#include <stdio.h>
#define maximum 10

int somme(int t[maximum][maximum],int nligne,int ncolumn,int nl, int nc){
     if (nl >= nligne) {
        return 0;
    } else if (nc < ncolumn) {
        return t[nl][nc] + somme(t,nligne,ncolumn,nl, nc + 1);
    } else {
        return somme(t,nligne,ncolumn, nl + 1, 0);
}
}

int main() {
int t[10][10],nl,nc,i,j,sum;
printf("Entrer le nombre des lignes  :");
scanf("%d",&nl);
printf("Entrer le nombre des columns  :");
scanf("%d",&nc);
for (i= 0 ; i<nl ; i++){
    for ( j=0 ; j<nc ;j++){
        printf("entrer la valeur de a[%d][%d] = ",i,j);
        scanf("%d",&t[i][j]);
    }
    
}
sum = somme(t,nl,nc,0,0);
printf("La somme des elements de tableau deux dimensions  est = %d",sum);
    return 0;
}
