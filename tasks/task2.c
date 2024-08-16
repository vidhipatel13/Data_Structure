// #include <stdio.h>
// #include <stdlib.h>
// #define SIZE 5
// int a[SIZE];
// // int small_index = 0;

// int smallest()
// {
//     int i;
//     int smallest = a[0];

//     for (i = 0; i < SIZE; i++)
//     {
//         if (smallest > a[i] && a[i] != 0 || smallest == 0)
//         {

//             smallest = a[i];
//         }
//     }
//     return smallest;
// }
// int itr()
// {
//     int count ,i,small,itr=0;
//     while (count != SIZE)

//     {
//         count = 0;
//         small = smallest();
//         printf("\n");
       
//         printf("\n small  : %d", small);
//         for (i = 0; i < SIZE; i++)
//         {

//             if (a[i] != 0)
//             {
//                 a[i] = a[i] - small;
//             }
//             if (a[i] == 0)
//             {
//                 count++;
//             }
//         }
//      printf("\n");
//         for (i = 0; i < SIZE; i++)
//         {
//             printf(" %d ", a[i]);
//         }itr++;
//     }
//     // printf("\n %d",co2
//     // unt);
//     return itr;
// }
// int main()
// {
//     int i;
//      for(i=0;i<SIZE;i++)
//         {
//             printf("\n enter the number [%d] = ",i);
//             scanf("%d",&a[i]);
//         }
//         for (i = 0; i < SIZE; i++)
//         {
//             printf("\n %d ", a[i]);
//         }
//         printf("\n Itr : %d",itr());

//     return 0;
// } // main









