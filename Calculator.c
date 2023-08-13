#include<stdio.h>
int main()
{
    int password;
    printf("Default password is '42'\n");
    printf("Password=");
    scanf("%d",&password);
    if(password==42)
    {
        int id;
        printf("Welcome!\n");
        printf("You're able to access this calculator!\n");
        printf("Input your ID no=");
        scanf(" %d",&id);
        printf("Your data is saved to our memory!\n");
        printf("What do you want to do?\n");
        printf("1.Addition(+)\n");
        printf("2.Substraction(-)\n");
        printf("3.Multiplication(*)\n");
        printf("4.Division(/)\n");

        int work;
        printf("Select any option!\n");
        scanf("%d",&work);
        if(work==1)
            printf("Addition(+)\n");
        else if(work==2)
            printf("Substraction(-)\n");
        else if(work==3)
            printf("Multiplication(*)\n");
        else if(work==4)
            printf("Division(/)\n");
        else
            printf("Back to the homepage!\n");


    float a,b;
    printf("First number=");
    scanf("%f",&a);
    printf("Second number=");
    scanf("%f",&b);
    switch(work)
    {
        case 1:
            printf("Result is %.2f+%.2f=%.2f\n",a,b,a+b);
        break;
        case 2:
            printf("Result is %.2f-%.2f=%.2f\n",a,b,a-b);
        break;
        case 3:
            printf("Result is %.2f*%.2f=%.2f\n",a,b,a*b);
        break;
        case 4:
            printf("Result is %.2f/%.2f=%.2f\n",a,b,a/b);
        break;
        default:
            printf("Invalid!\n");
    }
      char warning;
      printf("Do you want to calculate again? yes or no?\n");
      printf("For 'yes' press 'y'\n");
      printf("For 'no' press 'n'\n");

      scanf(" %c",&warning);

      if(warning=='y' || warning=='Y')
      {

      while('y')

      {
        printf("What do you want to do?\n");
        printf("1.Addition(+)\n");
        printf("2.Substraction(-)\n");
        printf("3.Multiplication(*)\n");
        printf("4.Division(/)\n");
        printf("0.Exit\n");

        int work;
        printf("Select any option!\n");
        scanf("%d",&work);

        if(work==0)
            break;

        if(work==1)
            printf("Addition(+)\n");
        else if(work==2)
            printf("Substraction(-)\n");
        else if(work==3)
            printf("Multiplication(*)\n");
        else if(work==4)
            printf("Division(/)\n");
        else
        {
            printf("Back to the homepage!\n");
            continue;
        }

    float a,b;
    printf("First number=");
    scanf("%f",&a);
    printf("Second number=");
    scanf("%f",&b);
    switch(work)
    {
        case 1:
            printf("Result is %.2f+%.2f=%.2f\n",a,b,a+b);
        break;
        case 2:
            printf("Result is %.2f-%.2f=%.2f\n",a,b,a-b);
        break;
        case 3:
            printf("Result is %.2f*%.2f=%.2f\n",a,b,a*b);
        break;
        case 4:
            printf("Result is %.0.2f/%.2f=%.2f\n",a,b,a/b);
        break;
        default:
            printf("Invalid!\n");
    }
      }
      printf("Thank you!");
      }
      else if(warning=='n' || warning=='N')
        printf("Good bye!");
        else
            printf("Error!");
    }
    else
        printf("Exit...!!!");

    return 0;

}