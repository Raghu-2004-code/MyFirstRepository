#include <stdio.h>
struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person raghu1 = {"Raghu", 21};
    struct Person *ptr = &raghu1;

    // Accessing structure members using pointer
    printf("Name: %s, Age: %d\n", ptr->name, ptr->age);
    return 0;
}

