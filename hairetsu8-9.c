#include<stdio.h>
#include<math.h>
#define N 100
int main (void){
    int a[N+1],i,j,limit;
    limit=(int)sqrt(N);
    for(i=2;i<=N;i++){
        a[i]=1;
    }
    for(j=2;j<=N;j++){
        for(i=N;i>=j+1;i--){
        if(i%j==0){
            a[i]=0;
        }
    }
    }
    for(i=2;i<=N;i++){
        if(a[i]==1){
            printf("%d\n",i);
        }
    }
}