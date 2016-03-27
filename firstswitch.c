/*
Hi! This is my first switch in C!
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
  printf("What day is it tomorrow? Type a day number. ")
  int d = GetInt();
  
  switch (d)
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      printf("Stop being a nerd and prepare for work!\n");
      break;
      
    case 6:
    case 7:
      printf("Yay! It's the weekend!\n");
      break;
      
    default:
      printf("That is not a valid day number.\n");
      break;
  }
}
