#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


struct User {
    char username[100];
    char password[100];
};
struct User users;

void loginFun(){
    char userName_login[100];
    char password_login[100];
    printf("User Name is : ");
    scanf("%s",&userName_login);
    printf("Password is : ");
    scanf("%s",&password_login);

   
    if (strcmp(userName_login,users.username)==0 && strcmp(password_login,users.password)==0)
    {
        printf("Success Login \n");
        return;
    }
    printf("Wrong Username or Passowrd \n");
    
}

void registerFun() {
    struct User newUser;

     printf("Enter Your User Name: ");
    scanf("%s",&newUser.username);
    printf("Enter Your Password: ");
    scanf("%s",&newUser.password);

    users = newUser;
    printf("Success Registration \n");
}
int main(int argc, char const *argv[])
{
    bool flag=true;
    while (flag){
    printf("Have you account yes[y],no[n]\n");
    char input;
    scanf("%c",&input);
    switch (input)
    {
    case 'y':
        loginFun();
        break;

    case 'n':
        registerFun();
        break;
    default:
    printf("error\n");
        break;
    }

    }
        return EXIT_SUCCESS;

}
