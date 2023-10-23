#include<stdio.h>
int main(void){
    int a[10],i,j,n,kmin=0,w;
    printf("データ数10以下を入力\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("データ入力:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(kmin=0;kmin<n;kmin++){
    for(i=0;i<n;i++){
        if(a[kmin]<a[i]){
            w=a[i];
            a[i]=a[kmin];
            a[kmin]=w;
        }
    }
    }
    printf("    Selection Sort:\n");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);     
    }
    printf("\n"); 
}