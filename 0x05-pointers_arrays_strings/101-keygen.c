/**
* Program Name: generate_password.c
* Author: Your Name
* Purpose: Generate random valid passwords for program 101-crackme
* Date: Today's Date
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* Function to generate a random valid password
*/

char* generatePassword()
{
int i;
char* password = (char*)malloc(sizeof(char)*9);
char validChars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
/**
* Seed random number generator
*/
 
srand(time(NULL));
/**
* Generate random characters and store in password
*/  
for (i = 0; i < 8; i++)
{
password[i] = validChars[rand() % 62];
}
/**
* Append null terminator at end of password string
*/  

password[8] = '\0';
return password;
}
/**
* Main function
*/
int main()
{
/**
* Generate random password
*/  
char* password = generatePassword();
/**
* Print password
*/  
printf("Password: %s\n", password);
/**
* Free memory
*/  
free(password);
return 0;
}
