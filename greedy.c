#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{ 
    //get the change amount
    float change = -1.00;
    do
    {
        printf("What's the change? ");
        change = GetFloat();
    }
    while (change < 0);
    
    //how many cents do we owe?
    int in_cents = round(change * 100);
    
    //calculate the number of coins
    int counter = 0;
    
    do
    {
        if (in_cents >= 25)
        {
            counter = in_cents / 25;
            in_cents = in_cents % 25;
            
        }
        else if (in_cents >= 10)
        {
            counter = counter + in_cents / 10;
            in_cents = in_cents % 10;
            
        }
        else if (in_cents >= 5)
        {
            counter = counter + in_cents / 5;
            in_cents = in_cents % 5;
            
        }
        else 
        {
            counter = counter + in_cents;
            in_cents = 0;
            
                    
        }
        

    }
    while (in_cents > 0);
    
    printf("%d\n", counter);
    
}  
    
    
    
