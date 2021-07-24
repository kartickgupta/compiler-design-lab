// C program to copy one file to another
#include<stdio.h> 
#include<stdlib.h>

int main() {
    FILE *fp1 ,*fp2;
    char ch;
    fp1 = fopen("employee.txt","r");
    fp2 = fopen("copy.txt","w");
    ch = fgetc(fp1);
    while (ch != EOF) { 
        fputc(ch, fp2);
        printf("%c",ch);
        ch=fgetc(fp1);
    }
    printf("Copying completed\n");
    return 0;
}