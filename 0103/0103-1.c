#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *data;
    if ((data = fopen("student.txt", "w")) == NULL)
    {
        puts("File can not be opened.");
    }
    else
    {
        puts("Enter the number, id, last name, first name, and score.");
        puts("Enter EOF to end input.");
        //printf("%s", "=> ");
        int num;
        char id;
        char lastName;
        char firstName;
        int score1, score2, score3;
        //scanf("%d%10s%15s%10s%d%d%d", &num, &id, &lastName, &firstName, &score1, &score2,&score3);
        while (!feof(data))
        {
            printf("%s", "=> ");
            scanf("%d %10s %15s %10s %d %d %d", &num, &id, &lastName, &firstName, &score1, &score2, &score3);
            fprintf(data, "%d %s %s %s %d %d %d\n", num, id, lastName, firstName, score1, score2, score3);
        }
        fclose(data);
    }
    return 0;
}