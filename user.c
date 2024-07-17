#include "user.h"

User user_new(char* name, int age, char* description) {
    return (User) { .name = name, .age = age, .description = description, .role = UR_GUEST };
}

bool user_can_read() {
    return true;
}

bool user_can_write(User* user) {
    if (user->role == UR_WRITER || user->role == UR_ADMIN) {
        return true;
    } else {
        return false;
    }
}

bool user_can_manage(User* user) {
    if (user->role == UR_ADMIN) {
        return true;
    } else {
        return false;
    }
}