#include <stdio.h>
#define SIZE 3
int main(){
    int matrixA[SIZE][SIZE]={{1,0,-1},{0,-1,1},{-1,0,1}};
    int matrixB[SIZE][SIZE]={{1,2,3},{2,3,1},{3,1,2}};
    int resultmatrix[SIZE][SIZE];
    int i,j,k;
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            resultmatrix[i][j]=0;
            for(k=0;k<SIZE;k++){
                resultmatrix[i][j]=resultmatrix[i][j]+(matrixA[i][k]*matrixB[k][j]);
            }
        }
    }
    for(i=0;i<SIZE;i++){
    for(j=0;j<SIZE;j++){
        printf("%d ",resultmatrix[i][j]);
    }
    printf("\n");
}
return 0;
}
