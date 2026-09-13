#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int max=100, min=1;
    srand(time(0));
    printf("10 random number between %d and %d : \n",min , max);

    for (int i=0;i<10;i++){
        int random_num=min+ rand() %(max-min+1);
        printf("%d ",random_num);
    }
    printf("\n\n");

    int row=3, col=3;
    int matrix[3][3]={
        {40,77,17},
        {5,29,64},
        {54,48,19}
    };

    int transpose[3][3];

    printf("\n---Original matrix---\n\n");
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",matrix[i][j]);
            transpose[j][i]=matrix[i][j];
        }
        printf("\n");
    }
    printf("\n---Transpose of Matrix---\n\n");

    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    int matrix2[3][3]={
        {1,98,50},
        {71,33,87},
        {4,75,8}
    };
    printf("\n---2nd matrix---\n\n");
    int sum_of_matrices[3][3];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",matrix2[i][j]);
            sum_of_matrices[i][j]= matrix[i][j]+matrix2[i][j];
        }
        printf("\n");
    }
    printf("\n---Sum of matrices---\n\n");
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",sum_of_matrices[i][j]);
        }
        printf("\n");
    }
    int subtraction_of_matrices[3][3];
    printf("\n---Subtract 2 matrix---\n\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            subtraction_of_matrices[i][j]=matrix[i][j]-matrix2[i][j];
            printf("%d ",subtraction_of_matrices[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}