#include <stdio.h>

void main()
{
    int x;
    int x100, x10, x1;

    printf("Input the nubmer: ");
    scanf("%d", &x);

    if(x<1000 && x>99)
    {
        int xx = x;
        x100 = xx/100;
        xx = xx%100;
        x10 = xx/10;
        x1 = xx%10;

        switch(x100)
        {
            case 1: printf("One hundred"); break;
            case 2: printf("Two hundred"); break;
            case 3: printf("Three hundred"); break;
            case 4: printf("Four hundred"); break;
            case 5: printf("Five hundred"); break;
            case 6: printf("Six hundred"); break;
            case 7: printf("Seven hundred"); break;
            case 8: printf("Eight hundred"); break;
            case 9: printf("Nine hundred"); break;
        }

        if(xx<20 && xx>9)
        {
            switch(xx)
            {
                case 10: printf(" ten"); break;
                case 11: printf(" eleven"); break;
                case 12: printf(" twelve"); break;
                case 13: printf(" thirteen"); break;
                case 14: printf(" fourteen"); break;
                case 15: printf(" fifteen"); break;
                case 16: printf(" sixteen"); break;
                case 17: printf(" seventeen"); break;
                case 18: printf(" eighteen"); break;
                case 19: printf(" nineteen"); break;
            }
        }
        else
        {
            switch(x10)
            {
                case 0: printf(" "); break;
                case 2: printf(" twenty"); break;
                case 3: printf(" thirty"); break;
                case 4: printf(" fourty"); break;
                case 5: printf(" fifty"); break;
                case 6: printf(" sixty"); break;
                case 7: printf(" seventy"); break;
                case 8: printf(" eighty"); break;
                case 9: printf(" ninety"); break;
            }

            if(x10 != 0 && x1 != 0) printf("-");

            switch(x1)
            {
                case 1: printf("one"); break;
                case 2: printf("two"); break;
                case 3: printf("three"); break;
                case 4: printf("four"); break;
                case 5: printf("five"); break;
                case 6: printf("six"); break;
                case 7: printf("seven"); break;
                case 8: printf("eight"); break;
                case 9: printf("nine"); break;
            }
        }
    }
    else printf("Wrong input");
}
