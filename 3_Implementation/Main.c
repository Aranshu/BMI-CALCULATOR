/**
 * @file Main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-05-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include "bodymassindex.h"

/**
 * @brief Main Function 
 * 
 * @return int 
 */
int main()
{
    printf("WELCOME TO BODY MASS INDEX CALCULATOR AND FURTHER GUIDANCE\n\n");
    float weight;
    float height;
    printf("ENTER YOUR WEIGHT IN KGs =");
    scanf("%f",&weight);
    printf("ENTER YOUR HEIGHT IN FEETs =");
    scanf("%f",&height);
    float bmi = BodyMassIndex(weight,height);   
    
    printf("YOUR BODY MASS INDEX IS = %.2f\n\n",bmi);
    
   	if(bmi<18)
    {
     	underweight1();
 	}
 	else if(bmi>25)
 	{
  		overweight1();
 	}
 	else 
    {
  		printf("YOU ARE NORMAL\n");
  		printf("YOU NEED TO MAINTAIN YOUR DIET\n\n");
  		printf("YOU NEED NOT TO PAY ANYTHING\n\n");
   	} 
    return 0;
}