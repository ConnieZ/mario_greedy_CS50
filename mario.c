#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = 0;
    // ask for the height
    do
    {
        printf("Please provide height between 0 and 23\n");
        height = GetInt();
        
    }
    while (height < 0 || height > 23);
    
    int num_blanks;
    int counter = 0;
    int hash_counter;
    //build the pyramid
    while (counter < height) 
    {
        counter++;
        num_blanks = height-counter;
        hash_counter = 0;
        //prints blanks
        while (num_blanks > 0)
        {
            printf(" ");
            num_blanks--;
        }
        //prints hashtags
        while (hash_counter < counter + 1)
        {
            printf("#");
            hash_counter++;
        }
        printf("\n");
    }
}
