/*1.  Assume User will be providing input in the form of a string as show below. 
Write a function to parse the string and initialize an array of structures. 

Example String : "1001 Aron 100.00" 
Example Structure : 
    struct Student{
        int rollno;
        char name[20];
        float marks;
    };

Note: User must be able define the no. of inputs/size of the array during runtime.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

typedef struct Student Student;

void parseString(const char* input, Student* students, int size) {
    char temp[20];
    const char* delimiter = " ";
    char* token;

    for (int i = 0; i < size; i++) {
        token = strtok((char*)input, delimiter);
        students[i].rollno = atoi(token);

        token = strtok(NULL, delimiter);
        strncpy(students[i].name, token, sizeof(students[i].name) - 1);

        token = strtok(NULL, delimiter);
        students[i].marks = atof(token);

        input = NULL; 
    }
}

void displayStudents(const Student* students, int size) {
    printf("Student Details:\n");
    for (int i = 0; i < size; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    getchar();  

    Student* students = malloc(size * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    char input[100];
    printf("Enter student details (rollno, name, marks): ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';  

    parseString(input, students, size);
    printf("\n");

    displayStudents(students, size);

    free(students);
    return 0;
}
