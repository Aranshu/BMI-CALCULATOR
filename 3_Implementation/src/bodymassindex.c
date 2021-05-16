/**
 * @file bodymassindex.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-05-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "bodymassindex.h"
#include<stdio.h>

/**
 * @brief function to calculate bmi
 * 
 * @param weight 
 * @param height 
 * @return float 
 */
float BodyMassIndex(float weight,float height)
{
    return weight/height*2;
    
}
