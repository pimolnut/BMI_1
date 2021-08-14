#include<stdio.h>
#include<math.h>
int main(){
    float height;
    float weight;
    printf("enter height : ");
    scanf("%f",&height);
    printf("enter weight : ");
    scanf("%f",&weight);
    float m = height/100;
    float BMI = weight/(pow(m,2));
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
    return 0;
}

