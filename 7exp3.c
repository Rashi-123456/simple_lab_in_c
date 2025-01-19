#include<stdio.h>
typedef struct{
    int book_id;
    char author_name[50];
    float price;
}books;
int main()
{
    books x;
    printf("enter the bookid:\n");
    scanf("%d",&x.book_id);
    printf("enter the author_name:\n");
    scanf("%s",x.author_name);
    printf("enter the book price:\n");
    scanf("%f",&x.price);
    printf("the inputed data is:\n");
    printf("bookid:%d,author name=%s,book price=%f",x.book_id,x.author_name,x.price);
    return 0;
}