#include<stdio.h>
#include<math.h>
int main(){
    float weight;
    float height;
    printf("Enter weight : ");
    scanf("%f",&weight);
    printf("Enter height : ");
    scanf("%f",&height);
    float n = height/100;
    float BMI = weight/(n*n);
    printf("%.2f\n",BMI);
    if (BMI<18.5)
    {
        printf("Underweight\n");
    }else if (18.5>BMI && BMI<24.9)
    {
        printf("slim\n");
    }else if (25.0>BMI && BMI<29.9)
    {
        printf("Over weight\n");
    }else if (BMI>30.0)
    {
     printf("Obesity\n");
    }
}



 