#include <stdio.h>
int main()
{
    char filename[100], data[1000];
    FILE *fptr;
    printf("Enter the name of the file: ");
    scanf("%s", &filename);
    fptr = fopen(filename, "w");  
    if(fptr == NULL){
        printf("Unable to create new file");
        return 1;
    }
    fflush(stdin);  
    printf("Enter content to write into the file: \n");
    fgets(data, 1000, stdin);
    fputs(data, fptr);
    printf("File created successfully!");
    fclose(fptr);
    return 0;
}