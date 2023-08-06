

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int length;
    printf("Please enter the length of the password that you want to be generated randomly: ");
    scanf("%d", &length);

    srand(time(NULL));
    const char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!'^#+%%&/()=?*\\|~";
    int character_count = sizeof(characters) - 1;

    printf("Random Password: ");
    int i = 0;
    while (i < length) {
        int random_index = rand() % character_count;
        printf("%c", characters[random_index]);
        i++;
    }
    printf("\n");
}