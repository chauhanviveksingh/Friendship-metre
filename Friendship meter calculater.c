#include <stdio.h>
#include <string.h>
#include <ctype.h>

//function will return sum of all digits
int sumOfDigits(int num)
{
    int sum = 0;
    while (num > 0) {
        sum += (num % 10);
        num /= 10;
    }
    return sum;
}

int main()
{
    char yName[40], pName[40];
    int sum, sum1, i, choice;
    float perc,perc1,max,min;

    do {
        printf("Enter your name: ");
        fflush(stdin);
        gets(yName);

        printf("Enter your Friend's name: ");
        fflush(stdin);
        gets(pName);

        sum = 0;
        for (i = 0; i < (strlen(yName)); i++) {
            sum += tolower(yName[i]);
        }

        sum1 = 0;
        for (i = 0; i < (strlen(yName)); i++) {
            sum1 += tolower(pName[i]);
        }

        /*perc = (sumOfDigits(sum) + sumOfDigits(sum1)) + 40;
        if (perc > 100)
            perc = 100;*/
            
            max= (sum > sum1) ? sum:sum1 ;
            //printf("ASCII Value is = %d \n",sum);
            //printf("ASCII Value is = %d \n",sum1);
            //printf("Maximun value is = %f \n ",max);
            
            min= (sum < sum1) ? sum:sum1 ;
            //printf("Minimum value is = %f\n",min);
            
            
            perc = (min / max);
            perc1 = perc * 100;
            printf("Your Friendship percentage is = %f \n",perc1);

        //printf("Your love percentage is: %.02f\n\n", perc);

        printf("Want to calculate with some one else (0 to exit, 1 to continue) ???: ");
        scanf("%d", &choice);

    } while (choice != 0);

    return 0;
}
