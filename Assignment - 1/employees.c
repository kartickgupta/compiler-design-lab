// C program to create a file called employee.txt and store information

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *ptr;
    ptr = fopen("employee.txt", "w");
    fopen("employee.txt","w");
    if(ptr == NULL){
        printf("File does not exist\n");
        exit(0);
    }

    printf("Enter number of employees: "); 
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        char name[40];
        int age;
        float salary;

        printf("Enter the name: ");
        scanf("%s",name);
        fprintf(ptr, "Name: %s\n", name);
        printf("Enter the age: "); 
        scanf("%d",&age); 
        fprintf(ptr, "Age: %d\n", age);
        printf("Enter the salary: "); 
        scanf("%f",&salary);       
        fprintf(ptr, "Salary: %f\n", salary);
    }
    fclose(ptr);
    return 0;
}