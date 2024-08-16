#include <stdio.h>

int arr[5];
void shift_array(int shift)
{

    int i, j, k;
    int prev = arr[0];
    int next = arr[0];

    for (i = 1; i <= (shift % 5); i++)
    {
        prev = arr[5];
        for (j = 4; j >= 0; j--)
        {
            next = arr[j];
            arr[j] = prev;
            prev = next;
        } 
        arr[4] = next;
    } 
} 

int main()
{
    int i;
    int shift;
    printf("\nEnter the elements : ");
    for (i = 0; i < 5; i++)
    {

        printf("\n arr[%d] : ", i);
        scanf("%d", &arr[i]);
    } 
     printf(" \nElements : \n");
    for (i = 0; i < 5; i++)
    {
        printf(" %d ", arr[i]);
    } 
    printf("\n Enter shifting : ");
    scanf("%d", &shift);
    printf("\n !!! AFter SHift !!!");
    if (shift % 5 != 0)
    {
        shift_array(shift);
    }
    for (i = 0; i < 5; i++)
    {
         printf(" %d ", arr[i]);
    }
} 




// 1 2 3 4 5 1 2 3 4/
// 1 2 3 4 5
// 1 2 3 5 0

// next prev 5 4