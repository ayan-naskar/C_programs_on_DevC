#include <stdio.h>
#include <conio.h>

typedef struct member
{
    char name[20];
    char address[50];
    int grade;
    float arc;
    int nor;

} hotel;
int main()
{
    float charge;
	int i,j;
    hotel h[10];
    for (i = 0; i < 10; i++)
    {
        printf("enter the name of the %d hotel \n", i + 1);
        fgets(h[i].name, 20, stdin);
        printf("enter the address of the %d hotel \n", i + 1);
        gets(h[i].address);
        printf("enter the grade of the %d hotel \n", i + 1);
        scanf("%d", &h[i].grade);
        printf("enter the average room charge of the %d hotel \n", i + 1);
        scanf("%f", &h[i].arc);
        printf("enter the number of rooms of the %d hotel\n", i + 1);
        scanf("%d", &h[i].nor);
        getchar();
    }
    printf("enter your roomcharge value\n");
    scanf("%f", &charge);
    for (j = 0; j < 10; j++)
    {
        if (h[j].arc < charge)
        {
            printf("%s\n", h[j].name);
            printf("%s\n", h[j].address);
            printf("%d\n", h[j].grade);
            printf("%f\n", h[j].arc);
            printf("%d\n", h[j].nor);
        }
    }

    return 0;
}
