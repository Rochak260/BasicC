//
//  main.c
//  Rochak
//
//  Created by Rochak on 1/1/21.
//

#include <stdio.h>
int main()
{
   // getting the ascending order
   int x[] = {4,6,7,3,4,2};
   int i,j;
   int temp = 0;
   for(i = 0; i < 6; i++)
      {
          for(j = i+1; j < 6; j++)
           //this will search untill it finds the least number and again it will start search the least number in the whole array
          {
            if(x[i] > x[j])
            {
                 temp = x[i];
                 x[i] = x[j];
                 x[j] = temp;
             
              }
            
          }
          printf("This is the numbers: %d\n", x[i]);
     }
}
