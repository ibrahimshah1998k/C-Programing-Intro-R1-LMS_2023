#include <stdio.h>
struct student {
    char name[50];
    char ID[50];
    float age;
} s;

int main() {
    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter Student ID: ");
    fgets(s.ID, sizeof(s.ID), stdin);
    printf("Enter Age: ");
    scanf("%f", &s.age);

    printf("\n\nDisplaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Student ID: %s", s.ID);
    printf("Age: %.1f\n", s.age);

    return 0;
}
