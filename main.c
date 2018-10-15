// Write a program that inputs n number of integer values and return how many of that numbers are unique.
// For example, if the user decides to enter the following 5 numbers: [5, 2, 4, 2, 3], the program shoud inform the user that 5, 4 and 3 are unique elements.
//
// Made by Jim Holguín on October 15th, 2018.

#include <stdio.h>

int main()
{
    int a[100], r[100];
    int n, i, j, count;

    printf("Give me N.");
    scanf("%d", &n);

    printf("Enter elements array.\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        r[i] = -1;
    }

    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
                r[j] = 0;
            }
        }

        if(r[i] != 0)
        {
            r[i] = count;
        }
    }

    printf("\nUnique element(s) in the array is/are:\n");
    for(i=0; i<n; i++)
    {
        if(r[i] == 1)
        {
            printf("%d\n", a[i]);
        }
    }
    return 0;
}