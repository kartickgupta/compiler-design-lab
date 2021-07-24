#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *fp, *save;
    int count = 0;
    char filename[20];
    printf("Enter the filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL){
        printf("Cannot open the file \n");
        exit(1);
    }
    const char *keywords[] = {"auto", "break", "case", "char", "int",
     "continue", "do", "default", "const", "for", "while", "return", "if", "sizeof"};
    
    save = fopen("keywords.txt", "w");
    char word[50];
    while (fscanf (fp, "%s", word) == 1){
        for (int i=0; i <sizeof (keywords)/sizeof(keywords[0]) ; i++){
            if (strcmp(keywords[i], word) == 0){
                printf("%s\n", keywords[i]);
                count++;
                fprintf(save, "%s\n", keywords[i]);
            }     
        }
    }
    fclose(save);
    printf("Total Number of Keywors : %d", count);   
    return 0;
}