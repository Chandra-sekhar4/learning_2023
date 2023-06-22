/*2. Write a function to initialize all members in the above array of structures*/

#include <stdio.h>
#include <string.h>

struct Student
{
    int rollno;
    char name[20];
    float marks;
};

typedef struct Student Student;

void initStudent(Student *ptr, int id, char *nptr, float marks){
    
    ptr->rollno = id;
    ptr->marks = marks;
    strcpy(ptr->name, nptr);
}

int main(){
    
    int size;
    printf("Enter the size of input: \n");
    scanf("%d", &size);
    int rollno;
    char name[20];
    float marks;
    
    Student arr[size]; 
    printf("Scanning all Member...\n");
    for (int i = 0; i < size; i++){
        printf("Enter rollno: \n");
        scanf("%d", &rollno);
        printf("Enter name: \n");
        scanf("%s", name);
        printf("Enter marks: \n");
        scanf("%f", &marks);
        initStudent(&arr[i], rollno, name, marks);
    }
  
    return 0;
}