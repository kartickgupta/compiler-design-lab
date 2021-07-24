#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUFFER_SIZE 1000

int count (FILE *fptr,const char *word) {
    char str[BUFFER_SIZE];
    char *pos;
    int index, count;
    count=0;
    while((fgets(str, BUFFER_SIZE, fptr))!=NULL){
        index=0;
        while((pos=strstr(str+index, word))!=NULL){
            index=(pos-str)+1;
            count++;
        }
    }
    return count;
}
int main() {
    FILE *fptr;
    char word[50];
    int wCount;
    printf("Enter word to search in the file: ");
    fflush(stdin);
    gets(word);
    fptr=fopen("copy.txt", "r");
    if(fptr==NULL){
        printf("Unable to open file ");
        exit(1);
    }
    wCount = count(fptr, word);
    printf("The word '%s' is found %d times in file. ", word, wCount);
    fclose(fptr);
    return 1;
}