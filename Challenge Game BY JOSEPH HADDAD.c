#include <stdio.h>
#include <string.h>
int main()
{
      // variables
      float score = 0;
      int age, childrens;
      // start
      printf("Tell me your age: ");
      scanf("%d", &age);
      printf("\nHow many childrens do you have? if NONE, then enter 0 \n");
      scanf("%d", &childrens);
      switch (childrens)
      {
      case 0:
            printf("oh!\nI'll add to your score 5 points!\n");
            score += 5;
            printf("Your score is %.2f points!\n", score);
            break;
      case 1:
            printf("GOOOOOOOODDDD!!!!\n");
            score += 1;
            printf("Your score is %.2f points!\n", score);
            break;
      case 2:
            printf("Great!\n");
            score += 1.5;
            printf("Your score is %.2f points!\n", score);
            break;
      case 3:
            printf("Great!\n");
            score += 1.75;
            printf("Your score is %.2f points!\n", score);
            break;
      case 4:
            printf("WOW!\n");
            score += 2;
            printf("Your score is %.2f points!\n", score);
            break;
      case 5:
            printf("FANTASTIC!\n");
            score += 2.5;
            printf("Your score is %.2f points!\n", score);
            break;
      }
      if (childrens > 5)
      {
            printf("WTF! You are a LEGEND!\nI'll Add 6 points!\n");
            score += 6;
            printf("Your score is %.2f points!\n", score);
      }
      printf("\n\nNow, let's start a small game\n");
      printf("So we have 3 Difficulties to choose from:\n");
// CHOOSE
choose:
      printf("1. Easy\n2. Medium\n3. Hard\n\n");
      int answer;
      printf("Choose Wisely: ");
      scanf("%d", &answer);
      if (answer == 1)
      {
            goto easy;
      }
      else if (answer == 2)
      {
            goto medium;
      }
      else if (answer == 3)
      {
            goto hard;
      }
      else
      {
            printf("You didn't choose from the list!\n\n");
            goto choose;
      }
      // EASY
easy:
      printf("You Choose Easy\n");
      printf("And Because of that, i'll Add 3 points\n");
      score += 3;
}