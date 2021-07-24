#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(){
    char s[5];
    printf("\nEnter any Operator: ");
    gets(s);
    switch (s[0]){
    case '>': 
        if (s[1] == '='){
        printf("\nGreater than or Equal to.");
        }
        else if(s[1] == ">"){
            printf("Shift Left.");
        }
        else    printf("\nGreater than.");
        break;
    case '<': 
        if (s[1] == '='){
        printf("\nLesser than or Equal to.");
        }
        else if (s[1] == '<'){
            printf("Shift Right.");
        }
        else    printf("\nLesser than.");
        break;
    case '=': 
        if (s[1] == '='){
        printf("\nEqual to.");
        }
        else    printf("\nAssignment.");
        break;
    case '!': 
        if (s[1] == '='){
        printf("\n Not Equal to.");
        }
        else    printf("\nBit not.");
        break;
    case '&': 
        if (s[1] == '&'){
        printf("\nLogical AND.");
        }
        else    printf("\nBitwise AND.");
        break;
    case '|': 
        if (s[1] == '|'){
        printf("\nLogical OR.");
        }
        else    printf("\nBitwise OR.");
        break;
    case '+':   printf("\nAddition.");
        break;
    case '-':   printf("\nSubtraction.");
        break;
    case '*':   printf("\nMultiplication.");
        break;
    case '/':   printf("\nDivision.");
        break;
    case '%':   printf("\nModulus.");
        break;
    case '"':   printf("Bitwise Complement.");
        break;
    case '^':   printf("Bitwise exclusive OR");

    default:    printf("\nNot a Operator.");
        break;
    }
    printf("\n");
    return 0;
}