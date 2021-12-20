#include <stdio.h>
#include <string.h>

typedef struct data
{
    char id[10];
    char name[10];
    int score1;
    int score2;
    int score3;
    float average;
} Data;

int main(void)
{
    int n;
    scanf("%d", &n);
    Data stu[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s %d %d %d", stu[i].id, stu[i].name, &stu[i].score1, &stu[i].score2, &stu[i].score3);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%s %s %d %d %d\n", stu[i].id, stu[i].name, stu[i].score1, stu[i].score2, stu[i].score3);
    // }
    for (int i = 0; i < n; i++)
    {
        stu[i].average = (stu[i].score1 + stu[i].score2 + stu[i].score3) / 3;
    }
    char input[2];
    while (1)
    {
        printf("===== menu =====\n");
        printf("f: find specific student data\n");
        printf("s: show all students' data\n");
        printf("d: show the sorted students' data (high to low)\n");
        printf("a: show the sorted students' data (low to high)\n");
        printf("b: show the average score value\n");
        printf("g: quit\n");
        printf("function choice: ");
        scanf("%s", input);
        if (strcmp(input, "f") == 0)
        {
            char ID;
            printf("Student's ID: ");
            scanf("%s", &ID);
        }
        else if (strcmp(input, "s") == 0)
        {
            for (int i = 0; i < n; i++)
            {
                printf("%s\t%s\t%d\t%d\t%d\n", stu[i].id, stu[i].name, stu[i].score1, stu[i].score2, stu[i].score3);
            }
        }
        else if (strcmp(input, "d") == 0)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (stu[i].average < stu[j].average)
                    {
                        char temp1 = stu[i].id[10];
                        stu[i].id[10] = stu[j].id[10];
                        stu[j].id[10] = temp1;
                        char temp2 = stu[i].name[10];
                        stu[i].name[10] = stu[j].name[10];
                        stu[j].name[10] = temp2;
                        int temp3 = stu[i].score1;
                        stu[i].score1 = stu[j].score1;
                        stu[j].score1 = temp3;
                        int temp4 = stu[i].score2;
                        stu[i].score2 = stu[j].score2;
                        stu[j].score2 = temp4;
                        int temp5 = stu[i].score3;
                        stu[i].score3 = stu[j].score3;
                        stu[j].score3 = temp5;
                        int temp6 = stu[i].average;
                        stu[i].average = stu[j].average;
                        stu[j].average = temp6;
                    }
                }
                printf("%s\t%s\t%d\t%d\t%d\n", stu[i].id, stu[i].name, stu[i].score1, stu[i].score2, stu[i].score3);
            }
        }
        else if (strcmp(input, "a") == 0)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (stu[i].average > stu[j].average)
                    {
                        char temp1 = stu[i].id[10];
                        stu[i].id[10] = stu[j].id[10];
                        stu[j].id[10] = temp1;
                        char temp2 = stu[i].name[10];
                        stu[i].name[10] = stu[j].name[10];
                        stu[j].name[10] = temp2;
                        int temp3 = stu[i].score1;
                        stu[i].score1 = stu[j].score1;
                        stu[j].score1 = temp3;
                        int temp4 = stu[i].score2;
                        stu[i].score2 = stu[j].score2;
                        stu[j].score2 = temp4;
                        int temp5 = stu[i].score3;
                        stu[i].score3 = stu[j].score3;
                        stu[j].score3 = temp5;
                        int temp6 = stu[i].average;
                        stu[i].average = stu[j].average;
                        stu[j].average = temp6;
                    }
                }
                printf("%s\t%s\t%d\t%d\t%d\n", stu[i].id, stu[i].name, stu[i].score1, stu[i].score2, stu[i].score3);
            }
        }
        else if (strcmp(input, "b") == 0)
        {
            for (int i = 0; i < n; i++)
            {
                printf("%s\t%s\t%.2f\n", stu[i].id, stu[i].name, stu[i].average);
            }
        }
        else if (strcmp(input, "q") == 0)
        {
            printf("quit");
            break;
        }
        else
        {
            printf("Error");
        }
    }
}