#include <stdio.h>
#include<string.h>

struct people 
{
    char name[100];
    int age;
    char city[100];
};

int main()
{
    struct people p[5];
    int i;
    
    for(i=0;i<5;i++)
    {
        printf("Enter the name: ");
        scanf("%s",p[i].name);
        printf("Enter the age: ");
        scanf("%d",&p[i].age);
        
        printf("Enter the city: ");
        scanf("%s",p[i].city);
        
    }
    struct people eldest;
    eldest.age=p[0].age;

    
    for(i=0;i<5;i++)
    {
        if(p[i].age>eldest.age)
        {
            eldest.age=p[i].age;
            strcpy(eldest.name,p[i].name);
            strcpy(eldest.city,p[i].city);
        }
    }
    printf("Name= %s, City= %s ",eldest.name,eldest.city);
}
