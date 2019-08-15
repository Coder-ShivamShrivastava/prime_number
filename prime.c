#include<stdio.h>
#include<conio.h>
void main()
{
  int v,i=3;
  printf("enter the value to check it is prime or not=");
  scanf("%d",&v);
  if(v%2==0)
  {
      printf("it is not a prime number\n");
  }
    else
    {
        while(i<v)
        {
            if(v%i==0)
            {
        printf("it is not a prime number\n");
        break;
        }
        else
        {
            printf("it is a prime number\n");
            break;
        }
        i++;
    }
    }
    getch();
}
