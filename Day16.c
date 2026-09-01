#include <stdio.h>
#include <stdlib.h>
int search_for_element(int *arr,int size,int num){
    for (int i=0;i<size;i++){
        if(arr[i]==num){
            return 1;
        }
    } 
    return -1;
}
int main(){
    int arr33[10]={87,61,93,22,14,77,17,83,16,20};
    int *ptr33=arr33;
    int size33=sizeof(arr33)/sizeof(arr33[0]);
    ptr33=arr33+(size33-1);
    for(int i=0;i<size33;i++){
        printf("%d\t",*ptr33);
        ptr33--;
    }
    printf("\n");
    int arr32[10]={70,65,93,40,32,1,82,58,8,32};
    int *ptr32=arr32;
    int size32=sizeof(arr32)/sizeof(arr32[0]);
    while (ptr32<(arr32+size32)){
        printf("%d\t",*ptr32);
        ptr32++;
    }
    printf("\n");
    int arr27[10]={7, 2 ,98, 85, 59, 55, 9, 86, 1, 82};
    int *ptr27=arr27;
    printf("first element of array is: %d\n",++(*ptr27));
    int arr26[10]={65 ,29 ,21 ,5 ,3 ,19 ,99 ,71 ,2 ,17};
    int *ptr26=arr26;
    printf("first element of array: %d\n",*ptr26);
    ptr26++ ;
    printf("second element of array: %d\n",*ptr26);
    ptr26=ptr26+1 ;
    printf("third element of the array: %d\n",*ptr26);

    int arr25[10]={67, 30 ,97 ,38 ,61 ,60 ,7 ,98 ,43 ,77};
    int size25=sizeof(arr25)/sizeof(arr25[0]);
    int search_for_element25;
    printf("enter which number do you want for searching: ");
    if (scanf("%d",&search_for_element25)!=1){
        printf("enter integer inly\n");
        return 1;
    }
    printf("\n");
    int result_25=search_for_element(arr25,size25,search_for_element25);
    if (result_25!=-1){
        printf("Your element found.\nHave a nice day!\n");
    } else if (result_25==-1) {
        printf("Your element not found.\nYou can try again.\n");
    }
    return 0;
}