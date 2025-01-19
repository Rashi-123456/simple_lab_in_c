#include<stdio.h>
#include<string.h>
union address{
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[20];
};
int main()
{
    union address x;
    strcpy(x.name,"rashi");
    printf("Name: %s\n", x.name);
    strcpy(x.home_address,"N24 wave colony ghaziabad");
    printf("Present Address (Home): %s\n", x.home_address);
    strcpy(x.hostel_address,"467 elemento , dehradun");
    printf("Present Address (Hostel): %s\n", x.hostel_address);
    strcpy(x.city,"new delhi");
    printf("City: %s\n", x.city);
    strcpy(x.state,"delhi");
    printf("State: %s\n", x.state);
    strcpy(x.zip,"62704");
    printf("ZIP Code: %s\n", x.zip);
    return 0;
}