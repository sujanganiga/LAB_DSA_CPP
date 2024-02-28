// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// char stack[100];
// int top = -1;

// void push(char x) {
//     stack[++top] = x;
// }

// char pop() {
//     if (top == -1)
//         return -1;
//     else
//         return stack[top--];
// }

// int priority(char x) {
//     if (x == '(')
//         return 0;
//     if (x == '+' || x == '-')
//         return 1;
//     if (x == '*' || x == '/')
//         return 2;
//     if (x == '^' || x == '$') // Assuming '^' and '$' represent exponentiation
//         return 3;
//     return 0;
// }

// int main() {
//     char exp[100];
//     char *e, x;

//     printf("Enter the expression: ");
//     fgets(exp, sizeof(exp), stdin);
    
//     // Remove whitespace characters from the input expression
//     int len = strlen(exp);
//     for (int i = 0; i < len; i++) {
//         if (exp[i] != ' ' && exp[i] != '\n') {
//             exp[len] = '\0';
//             break;
//         }
//     }

//     e = exp;
   
//     printf("Postfix expression: ");
//     while (*e != '\0') {
//         if (isalnum(*e))
//             printf("%c ", *e);
//         else if (*e == '(')
//             push(*e);
//         else if (*e == ')') {
//             while ((x = pop()) != '(')
//                 printf("%c ", x);
//         } else {
//             while (priority(stack[top]) >= priority(*e))
//                 printf("%c ", pop());
//             push(*e);
//         }
//         e++;
//     }
   
//     while (top != -1) {
//         printf("%c ", pop());
//     }
    
//     return 0;
// }
#include<stdio.h>
int prod(int m,int n){
    if (m==0){
        return n;
    }
    else {

        int g=m%10;
        n=g+n*10;
        prod(m/10,n);
    }
 
}
int main(){
    //printf("%d",prod(12,0));
    int i=0;
    for(;i<3;i++){
            printf("%d",i);
    }
    printf("\n");
    printf("%d",i);
}