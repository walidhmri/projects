// transposer un tableau deux dimensions
// Oualid Hamri G3
#include <stdio.h>
#define maximum 100

void transpose(int tab[maximum][maximum], int ligne, int column,int nl,int nc) {
    if (column == 3) {
        return;
    }

    int temp = tab[ligne][column];
    tab[ligne][column] = tab[column][ligne];
    tab[column][ligne] = temp;

    transpose(tab, ligne, column + 1,nl,nc);
}

int main() {
    int tab[maximum][maximum] ,nl,nc,i,j;

    printf("Entrer le nombre des lignes  :");
    scanf("%d",&nl);
    printf("Entrer le nombre des columns  :");
    scanf("%d",&nc);
    for (i= 0 ; i<nl ; i++){
        for ( j=0 ; j<nc ;j++){
            printf("entrer la valeur de t[%d][%d] = ",i,j);
            scanf("%d",&tab[i][j]);
        }
        
    }
    printf("Matrice originale :\n");
    for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    

    transpose(tab, 0, 0,nl,nc);

    printf("Matrice transposée :\n");
    for (i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

    return 0;
}
