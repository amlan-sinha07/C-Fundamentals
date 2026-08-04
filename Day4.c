#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//leetcode 38 t:O(n*length) s:(length)
char* countAndSay(int n) {
    char* result=(char*)malloc(5000);
    strcpy(result,"1");

    for(int i=2;i<=n;i++){
        char temp[5000]="";
        int len=strlen(result);
        int index=0;

        for(int j=0;j<len;){
            char digit=result[j];
            int count=0;
            while(j<len && result[j]==digit){
                count++;
                j++;
            }
            index+=sprintf(temp+index,"%d%c",count,digit);
        }
        strcpy(result,temp);
    }
    return result;
}

//runtime 3 ms

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//leetcode 412 T:O(n) S:O(n)
char** fizzBuzz(int n, int* returnSize) {
    char** answer=(char**)malloc(n*sizeof(char*));
    *returnSize=n;
    for(int i=1;i<=n;i++){
        answer[i-1]=(char*)malloc(10);
        if(i%15==0){
            strcpy(answer[i-1],"FizzBuzz");
        }
        else if (i%3==0){
            strcpy(answer[i-1],"Fizz");
        }
        else if (i%5==0){
            strcpy(answer[i-1],"Buzz");
        }
        else{
            sprintf(answer[i-1],"%d",i);
        }
    }
    return answer;
}


//runtime 1 ms