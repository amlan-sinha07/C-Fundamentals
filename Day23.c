#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
    int val ;
    struct ListNode *next;
} ListNode ;
// define create node first
ListNode* createNode(int value){
    ListNode *newNode = malloc(sizeof(ListNode));
    
    if (newNode ==NULL){
        return NULL;
    }
    newNode->val = value;
    newNode->next = NULL;
    return newNode;
}
// now create node is ready to be known
void pushBack(ListNode **head,ListNode **tail,int value){
    ListNode *newNode = createNode(value);
    if (newNode == NULL){
        return  ;
    }
    // newNode->val = value ;
    // newNode->next = NULL ;  
    if (*head == NULL){
        *head = newNode ;
        *tail = newNode ;
        return ;
    } else {
        (*tail)->next = newNode ;
        *tail = newNode ;
    }
    // Find Last Node
    // ListNode *current = *head ;
    // while (current->next != NULL){
    //     current = current->next;
    // }
    // current->next = newNode ;
}
ListNode *addTwoLists(ListNode *l1,ListNode *l2){
    ListNode *result = NULL ;
    ListNode *tail = NULL;
    int carry = 0 ;
    while (l1 != NULL || l2 != NULL || carry != 0){
        int digit1 = 0;
        int digit2 = 0;
        if (l1 != NULL){
            digit1 = l1->val;
        }
        if (l2 != NULL){
            digit2 = l2->val;
        }
        int sum = digit1 + digit2 + carry ;
        int digit = sum % 10;
        carry = sum / 10;
        printf("d1 = %d, d2 = %d, carry = %d, sum = %d, digit = %d\n ",
                digit1,digit2,carry,sum,digit);
        pushBack(&result, &tail,digit);
        if (l1 != NULL){
            l1 = l1->next;
        }
        if (l2 != NULL){
            l2 = l2->next;
        }
    }
    return result; 
}
void printList(ListNode* head){
    while (head != NULL){
        printf("%d -> ",head->val);
        head = head->next;
    }
    printf("NULL\n");
}

ListNode* buildList(int arr[],int size){
    ListNode* head = NULL;
    ListNode* tail = NULL;
    for (int i=0; i<size ;i++){
        pushBack(&head,&tail,arr[i]);
    }
    return head;
}
void freeList(ListNode* head){
    while (head != NULL){
        ListNode *temp = head ;
        head = head->next;
        free(temp);
    }
}
void printCorrespondingSum(ListNode *l1,ListNode *l2){
    while (l1 != NULL && l2 != NULL){
        printf("%d + %d = %d\n",
                l1->val,
                l2->val,
                l1->val + l2->val);
        l1 = l1->next;
        l2 = l2->next;
    }
}
void addWithCarry(ListNode *l1,ListNode *l2){
    int carry = 0;
    while (l1 != NULL || l2 != NULL){
        int digit1 = 0;
        int digit2 = 0;
        if (l1 != NULL){
            digit1 = l1->val;
        }
        if (l2 != NULL){
            digit2 = l2->val;
        }
        int sum = digit1 + digit2 + carry ;
        int digit = sum % 10;
        carry = sum / 10;
        printf("digit = %d , carry = %d \n ",digit,carry);
        if (l1 != NULL){
            l1 = l1->next;
        }
        if (l2 != NULL){
            l2 = l2->next;
        }
    }
    if (carry != 0){
        printf("final carry = %d\n",carry);
    }
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->val = 0;
    head->next = NULL;
    struct ListNode* current = head ;
    int digit = 0;
    int carry = 0;
    while (l1 != NULL || l2 != NULL || carry != 0){
        int digit1 = 0 ;
        int digit2 = 0 ;
        if (l1 != NULL){
            digit1 = l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL){
            digit2 = l2->val;
            l2 = l2->next;
        }
        int sum = digit1 + digit2 + carry ;
        digit = sum % 10 ;
        carry = sum / 10 ;
        struct ListNode *newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = digit ;
        newNode->next = NULL;

        current->next = newNode ;
        current = current->next ;
    }
    struct ListNode* realhead = head->next ;
    free(head);

    return realhead ;
}
int main() {
    ListNode *l1 = createNode(2);// NULL;// createNode(9);
    l1->next = createNode(4);
    l1->next->next = createNode(3);
    // l1->next->next->next = createNode(9);

    ListNode *l2 = createNode(5);
    l2->next = createNode(6);
    // l2->next->next =createNode(4);

    ListNode *result = addTwoLists(l1,l2);

    printList(result);

    // addWithCarry(l1,l2);

    // printCorrespondingSum(l1,l2);

    // int a = 342;
    // int b = 465;
    // int sum = a + b;
    // printf("%d + %d = %d\n",a,b,sum);
    // a = 999;
    // b = 1;
    // sum = a+b;
    // printf("%d + %d = %d\n",a,b,sum);

    // int a = 7 ;
    // int b = 8 ;
    // int carry = 0 ;
    // int sum =  a +b+ carry ;
    // int digit = sum % 10 ;
    // carry = sum / 10 ;
    // printf("Digit = %d\n",digit);
    // printf("Carry = %d\n",carry);

    // int arr[]={2,4,3};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // ListNode *head = buildList(arr,size);
    // printList(head);
    // freeList(head);

    // ListNode *head = NULL;
    // pushBack(&head,2);
    // pushBack(&head,6);
    // pushBack(&head,5);
    // printList(head);
    return 0;
}