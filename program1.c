#include <stdio.h>

int main() {
    int n, i;
    int attendance[100];
    int present = 0, absent = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Student %d attendance (1 = Present, 0 = Absent): ", i + 1);
        scanf("%d", &attendance[i]);

        if(attendance[i] == 1) {
            present++;
        } else {
            absent++;
        }
    }

    printf("\n--- Attendance Report ---\n");

    for(i = 0; i < n; i++) {
        if(attendance[i] == 1)
            printf("Student %d : Present\n", i + 1);
        else
            printf("Student %d : Absent\n", i + 1);
    }

    printf("\nTotal Present: %d", present);
    printf("\nTotal Absent: %d\n", absent);

    return 0;
}
