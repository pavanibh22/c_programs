/**************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

***************************/

#include <stdio.h>

int main()
{
    int r1,c1,r2,c2,r3,c3,i,j,k;
    printf("Enter the rows of matrix1: \n");
    scanf("%d",&r1);
    printf("Enter the columns of matrix1: \n");
    scanf("%d",&c1);
    int matrix1[r1][c1];
    
    printf("Enter the rows of matrix2: \n");
    scanf("%d",&r2);
    printf("Enter the columns of matrix2: \n");
    scanf("%d",&c2);
    
    int matrix2[r2][c2];
    
    printf("Enter elements of matrix 1");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }
    
    printf("Enter elements of matrix 2");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&matrix2[i][j]);
        }
    }
    int matrix3[r1][c1];
    if(c1!=r2){
        printf("Matrix multiplication can't be done: ");
    }
    else {
        printf("The matrix after multiplication is: ");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                matrix3[i][j]=0;
                for(k=0;k<r1;k++){
                    matrix3[i][j] += matrix1[i][k]*matrix2[k][j];
                }
            }
        }
        
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                printf("%d ",matrix3[i][j]);
            }
            printf("\n");
        }
    }
    
}
