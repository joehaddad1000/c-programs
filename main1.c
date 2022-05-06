#include <stdio.h>
#include <stdlib.h>
int main()
{
      printf("Can you tell me what PI value is?\n");
      const float PI = 3.14;
      float answer1;
      scanf("%f",&answer1);
            while (answer1!=PI)
            {
                  if (answer1==PI)
                  {
                        printf("PI is indeed %f\n",answer1);
                  }
                        else if(answer1!=PI)
                        {
                              printf("%.2f \? Really\?\nwhat the FALAFEL son, you don't know the value of PI???\nPI is %.2f\n",answer1,PI);
                              printf("Let's retry it!\n");
                        }
                  printf("Can you tell me what PI value is?\n");      
                  scanf("%f",&answer1);
            }
         printf("thanks my son\n");   
     return 0;                   
}
