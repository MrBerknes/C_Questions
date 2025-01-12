#include<stdio.h>
int main(){
    int i,j,m,n;
    int a[10][10],b[10][10],c[10][10];
    printf("satir sayisi= ");
    scanf("%d",&m);
    printf("sutun sayisi=");
    scanf("%d",&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("b[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
    }
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
           c[i][j]=a[i][j]+b[i][j];
        }
    }
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}