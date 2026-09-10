#include <stdio.h>
#define rows 3
#define column 3
void display(int arr[],int n){
    int i=0;
    while(i<n){

        printf("%d\t",arr[i]);
        i++ ;
    }
}
void minimum(int arr[],int n){
    int i=0, min=arr[0];
    for (i;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d\n",min);
}
void maximum(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d\n",max);
}
void sum(int arr[],int n){
    int total=0;
    for (int i=0;i<n;i++){
        total += arr[i];
    }
    printf("%d",sum);
}
void reverse(int arr[],int n){
    for (int i=n-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }
}
int main() {
    int arr59[]={76,91,6,3,79,71,65,44,24,5,98,62,42,36,36};
    int size59=sizeof(arr59)/sizeof(arr59[0]);

    printf("\n---Array indexing---\n");
    for (int i=0; i<size59; i++){
        printf("%d\t",arr59[i]);
    }
    printf("\n");
    int *ptr59=arr59;

    printf("\n---Pointer arithmetic---\n");
    for (int i=0;i<size59 ; i++){

        printf("%d\t",*(ptr59+i));
    }
    printf("\n");
 
    int size60;
    printf("\n---Enter how much will be the size of array\n");
    
    if (scanf("%d",&size60) != 1 || size60 <=0){
        printf("\nUse Positive Integers Only.\n");

        return 1;
    }
    int arr60[size60];
    for (int i=0; i<size60; i++){
        
        printf("\nElement at %d : ",i+1);
        if (scanf("%d",&arr60[i]) != 1){
        
            printf("\nUse Integers Only.\n");
            return 1;
        }
    }
    printf("\nWhat you want?\n");
    int choice;
    printf("\n1. display\n2. sum\n3. maximum\n4. minimum\n5. reverse\n6. exit\n");
    scanf("%d",&choice);

    if (choice==1){
        printf("\n---Display--\n");
        display(arr60,size60);
        printf("\n");
    } else if (choice==2){
        printf("\n---Sum---\n");
        sum(arr60,size60);
           printf("\n");

    } else if (choice==3){
        printf("\n---Maximum---\n");
        maximum(arr60,size60);
        printf("\n");

    } else if (choice==4){
        printf("\n---Minimum---\n");
        minimum(arr60,size60);
        printf("\n");

    } else if (choice==5){
        printf("\n---Reverse---\n");
        reverse(arr60,size60);
        printf("\n");

    } else if (choice==6){
        return 0;
    }
    int ma13[3][3]={
        {19,32,1},
        {84,32,40},
        {33,31,71}
    };
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",ma13[i][j]);
        }
    }
    printf("\n");
    int mda14[3][3]={
        {86,40,7},
        {72,56,5},
        {56,35,7}
    };
    int sum14=0;
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            sum14 += mda14[i][j];
        }
    }
    printf("\n---Sum of Multidimensional Array---\n%d\n",sum14);

    int mda15[3][3]={
        {14,93,33},
        {28,41,52},
        {62,87,58}
    };
    int largest_element=mda15[0][0];
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(mda15[i][j]>largest_element){
                largest_element=mda15[i][j];
            }
        }
    }
    printf("\n---Largest element for Multidimensional Array---\n%d\n",largest_element);

  
    int smallest_element=mda15[0][0];
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(mda15[i][j]<smallest_element){
               smallest_element=mda15[i][j];
            }
        }
    } 
    printf("\n---Smallest element for Multidimensional Array---\n%d\n",smallest_element);

    for (int i=0;i<3;i++){
        int row_sum=0;
        for(int j=0;j<3;j++){
            row_sum += mda15[i][j];
        }
        printf("\n---Sum of row %d : %d ---\n",i+1,row_sum);
    } 
    for (int j=0;j<column;j++){
        int column_sum=0;
        for(int i=0;i<rows;i++){
            column_sum += mda15[i][j];
        }
        printf("\n---Sum of Column %d : %d ---\n",j+1,column_sum);
    }
    int odds=0 , even=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            if (mda15[i][j] %2==0){
                even+=1 ;
            } else {
                odds += 1 ;
            }
        }
    }
    printf("\n---No of odd : %d and even : %d ---\n",odds,even);

    int diagonal_element=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                diagonal_element+=mda15[i][j];
                printf("\n---Diagonal element %d : %d ---\n",i+1,mda15[i][j]);
            }
        }
    }
    printf("\n");
    printf("\n---Sum of diagonal element of multidimensional Array : %d ---\n",diagonal_element);

    //21
    return 0;
}