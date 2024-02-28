#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

int countNodes(struct ListNode *node) {
    int count = 0;
    while (node) {
        count++;
        node = node->next;
    }
    return count;
}

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev = NULL;
    struct ListNode *current = head;
    while (current) {
        struct ListNode *nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }
    return prev;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int check(struct ListNode* tem){
    int count=0;
    //struct ListNode* tem1=tem;
    while(tem!=NULL){
        tem=tem->next;
        printf("%d",count++);
    }
 return count;
}
struct ListNode* reverseEvenLengthGroups(struct ListNode* head) {
    if(!head&&!head->next){
        return head;
    }
    struct ListNode* temp=head->next;
    struct ListNode* prev=NULL;
    struct ListNode* next1=head;
    int n=2;
    while(temp){
        int a=check(temp);
        if(a<=n){
            if(a%2==0){
                while(temp&&temp->next){
                    next1=next1->next;
                    temp->next=prev;
                    prev=temp;
                    temp=next1;
                }

            }
        }
        int count=0;
        while(count==n){
            temp=temp->next;
            count++;
        }
        n++;

        }
    return head;
}
void printList(struct ListNode *node) {
    while (node) {
        printf("%d ", node->val);
        node = node->next;
    }
    printf("\n");
}

int main() {
    // Example usage
    struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode));
    head->val = 1;
    head->next = (struct ListNode *)malloc(sizeof(struct ListNode));
    head->next->val = 2;
    head->next->next = (struct ListNode *)malloc(sizeof(struct ListNode));
    head->next->next->val = 3;
    head->next->next->next = (struct ListNode *)malloc(sizeof(struct ListNode));
    head->next->next->next->val = 4;
    head->next->next->next->next = (struct ListNode *)malloc(sizeof(struct ListNode));
    head->next->next->next->next->val = 5;
    head->next->next->next->next->next = NULL;

    printf("Original List: ");
    printList(head);

    struct ListNode *modifiedHead = reverseEvenLengthGroups(head);
    printf("Modified List: ");
    printList(modifiedHead);

    return 0;
}
