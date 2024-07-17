enum UserRole {
    UR_ADMIN,
    UR_WRITER,
    UR_GUEST
};

typedef struct {
    char* name;
    int age;
    char* description;
    enum UserRole role;
} User;

User user_new(char* name, int age, char* description);
bool user_can_read();
bool user_can_write(User* user);
bool user_can_manage(User* user);