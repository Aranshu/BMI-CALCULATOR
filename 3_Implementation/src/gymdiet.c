/**
 * @file gymdiet.c
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
 * @brief function of diet
 * 
 */
void diet()
{
  printf("MILK,FRUITS,VEGGIES,CHICKEN,PANEER,POHA,OATS,WHEY PROTIEN\n\n");
     printf("AMOUNT TO BE PAID = 1000RS\n\n");
}

/**
 * @brief function to display gym list
 * 
 */
void gymlist()
{
 printf("NEARBY GYMS ARE\n 1.GOLD's GYM\n 2.BURN GYM\n 3.ANYTIME FITNESS\n 4.CLUB VIVA\n 5.CODE FITNESS\n\n CHOOSE ANY ONE=\n");
        int gym_choice;
        scanf("%d",&gym_choice);
        
        if(gym_choice==1)
      {
       
          printf("ADDRESS = Phase-7 Industial Area Mohali PUNJAB INDIA\n");
          printf("AMOUNT TO BE PAID = 1000RS\n\n");
       
      }
     else if(gym_choice==2)
      {
       
          printf("ADDRESS = SCO 102 SECTOR 40 Mohali PUNJAB INDIA\n");
          printf("AMOUNT TO BE PAID = 1000RS\n\n");
      }
     else if(gym_choice==3)
      {
       
          printf("ADDRESS = COMPLESX NO. 1 MAIN MARKET Gillco Vally Mohali PUNJAB INDIA\n");
          printf("AMOUNT TO BE PAID = 1000RS\n\n");
      }
     else if(gym_choice==4)
      {
       
          printf("ADDRESS = SHOP N0.11 CHANDIGARH PUNJAB INDIA\n");
          printf("AMOUNT TO BE PAID = 1000RS\n\n");
      }
     else if(gym_choice==5)
      {
    
          printf("ADDRESS = SCO 100 1st FLOOR MAIN MARKET TAJPUR ROAD LUDHIANA PUNJAB INDIA\n");
          printf("AMOUNT TO BE PAID = 1000RS\n\n");
      }
}

