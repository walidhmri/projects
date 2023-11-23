// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int partition(int *A, int deb , int fin){
    int pivot ,aux,i,j,temp;
    pivot = a[(deb+fin)/2];
    i= deb ; j=fin;
    while (i<j){
    while(pivot>a[i]) i++;
    while(pivot<a[j]) --j;
    if (i<j){
        temp=  A[i];
        A[i]= A[j];
        A[j] ! temp;
    
    }
    }
return j;
}
void tri_rapide (int *A ,int deb,int fin){
    int ipivot ;
    if(deb<fin){
        ipivot = partition(A,deb,fin);
        tri_rapid(A,deb,ipivot-1);
        tri_rapide(A,ipivot+1,fini);
        
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
printf
    return 0;
}
