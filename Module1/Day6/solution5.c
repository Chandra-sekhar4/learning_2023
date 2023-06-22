/*5. Write a function to perform a search operation on the array of structures
 based on name of the student*/

#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void searchByName(const struct Student* students, int size, const char* name) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("Student found!\n");
            printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
            found = 1;
        }
    }
    if (!found) {
        printf("Student not found.\n");
    }
}

void displayStudents(const struct Student* students, int size) {
    printf("Student Details:\n");
    for (int i = 0; i < size; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }
}

void populateStudents(struct Student* students, int size) {
    printf("Enter student details:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Enter Roll No: ");
        scanf("%d", &students[i].rollno);
        printf("Enter Name: ");
        scanf("%s", students[i].name);
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }
}

int main() {
    const int size = 1;
    struct Student students[size];

    populateStudents(students, size);
    printf("\n");

    displayStudents(students, size);
    printf("\n");

    char searchName[20];
    printf("Enter the name to search: ");
    scanf("%s", searchName);

    searchByName(students, size, searchName);

    return 0;
}