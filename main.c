#include <stdio.h>
#include "user.h"

int main(void) {
    User user = user_new("John", 20, "An example");
    printf("Name: %s\n", user.name);
    printf("Age: %d\n", user.age);

    char* role_string;

    switch (user.role) {
        case UR_GUEST:
            role_string = "Guest";
            break;
        case UR_ADMIN:
            role_string = "Admin";
            break;
        case UR_WRITER:
            role_string = "Writer";
            break;
    }

    printf("Role: %s\n", role_string);
    printf("Can the user write: %s\n", user_can_write(&user) ? "true" : "false");
    printf("Changing the role to ADMIN...\n");
    user.role = UR_ADMIN;

    printf("Can the user write: %s\n", user_can_write(&user) ? "true" : "false");
    return 0;
}