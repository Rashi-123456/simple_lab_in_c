#include<stdio.h>
int main()
{
    unsigned int weight,height;//weight,height are variables stored in data type +ve integer
    float bmi;//bmi is the body mass index stored in a float data type variable
    printf("please enter your weight in kg:\n");
    scanf("%u",&weight);
    printf("please enter your height in meters:\n");
    scanf("%u",&height);
    bmi=weight/(height*height);
    if(bmi<=15){printf("starvation\n");}
    else if(bmi>=15.1&&bmi<=17.5){printf("anorexic\n");}
    else if(bmi>=17.6&&bmi<=18.5){printf("underweight\n");}
    else if(bmi>=18.6&&bmi<=24.9){printf("ideal\n");}
    else if(bmi>=25&&bmi<=25.9){printf("overweight\n");}
    else if(bmi>=30&&bmi<=39.9){printf("obese\n");}
    else if(bmi>=40){printf("morbidity obese\n");}
    else{printf("cant say anything\n");}
    return 0;
}