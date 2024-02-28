#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    float data;
    char sub[20];
    struct node *next;
};

struct node *test1 = NULL, *test2 = NULL, *test3 = NULL, *temp = NULL,*store;

void insert(struct node **head, float mark, char sub[]) {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    strcpy(new_node->sub, sub);
    new_node->data = mark;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
    }
    else {
        struct node *temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void assign() {
    insert(&store, 0.0, "math");
    insert(&store, 0.0, "dd");
    insert(&store, 0.0, "coa");
}

void display(struct node *temp1, int way) {
    struct node *t=store;
    while (temp1&&t) {
        printf("avg marks for %s is ", t->sub);
        printf("-> %.2f \n", (temp1->data) * way);
        temp1 = temp1->next;
        t=t->next;
    }
}

float smallest(float a, float b, float c) {
    if (a <= b && a <= c) {
        return a;
    } else if (b <= a && b <= c) {
        return b;
    } else {
        return c;
    }
}

void calavg(struct node *test1, struct node *test2, struct node *test3) {
    while (test1 != NULL && test2 != NULL && test3 != NULL) {
        float a = test1->data;
        float b = test2->data;
        float c = test3->data;
        float avg;
        avg = ((a + b + c) - smallest(a, b, c)) / 2;
        test1->data = avg;
        test1 = test1->next;
        test2 = test2->next;
        test3 = test3->next;
    }
}

int main() {
    char YorN;
    float mark, out;

    printf("S1?");
    scanf(" %c", &YorN);
    while (YorN == 'y' || YorN == 'Y') {
        assign();

        printf("\nEnter the marks for test1:\n");
        temp = store;
        while (temp != NULL) {
            printf("Enter the marks for %s: ", temp->sub);
            scanf("%f", &mark);
            printf("Out of: ");
            scanf("%f", &out);
            mark = mark / out;
            temp->data = mark;
            temp = temp->next;
        }

        printf("\nEnter the marks for test2:\n");
        temp = store;
        while (temp != NULL) {
            printf("Enter the marks for %s: ", temp->sub);
            scanf("%f", &mark);
            printf("Out of: ");
            scanf("%f", &out);
            mark = mark / out;
            insert(&test2, mark, temp->sub);
            temp = temp->next;
        }

        printf("\nEnter the marks for test3:\n");
        temp = store;
        while (temp != NULL) {
            printf("Enter the marks for %s: ", temp->sub);
            scanf("%f", &mark);
            printf("Out of: ");
            scanf("%f", &out);
            mark = mark / out;
            insert(&test3, mark, temp->sub);
            temp = temp->next;
        }

        calavg(test1, test2, test3);

        printf("\nFormat in which marks should be displayed: ");
        int way;
        scanf("%d", &way);
        display(test1, way);

        printf("\nDo you want to continue (y/n)? ");
        scanf(" %c", &YorN);
    }
    return 0;
}
