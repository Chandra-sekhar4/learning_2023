/*4. Write a function to sort the array of structures in descending order based on marks */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void displayStudent(const struct Student* student) {
    printf("Roll No: %d, Name: %s, Marks: %.2f\n", student->rollno, student->name, student->marks);
}

void displayStudents(const struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        displayStudent(&students[i]);
    }
}

void initializeStudents(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollno);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }
}

int compare(const void* a, const void* b) {
    const struct Student* studentA = (const struct Student*)a;
    const struct Student* studentB = (const struct Student*)b;
    
    // Sort in descending based on marks
    if (studentA->marks > studentB->marks) {
        return -1;
    } else if (studentA->marks < studentB->marks) {
        return 1;
    } else {
        return 0;
    }
}

void sortArray(struct Student* students, int size) {
    qsort(students, size, sizeof(struct Student), compare);
}

int main() {
    int size;
    printf("Enter the number of student: \n");
    scanf("%d", &size);
    struct Student students[size];

    //initializeStudents
    initializeStudents(students, size);

    //sortStudents
    sortArray(students, size);

    printf("Displaying student in descending order based on marks...\n");
    displayStudents(students, size);

    return 0;
}
