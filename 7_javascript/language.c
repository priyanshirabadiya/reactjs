// #include<stdio.h>
// int main()
// {
//     int i , b = 1, c , a = 0;
//     for(i = 1 ; i <= 5 ; i++ )
//     {
//         c = a + b ;
//         printf("%d ",c);
//         a = b;
//         b = c;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i , n = 5 , fec = 1;
//     for(i = 1 ; i <= 5 ; ++i)
//     {
//         fec = fec * i;
//     }
//         printf("%d ",fec);        
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int rev = 0, i , num , reminder;
//     printf("enter number:");
//     scanf("%d",&num);
//     while(num > 0)
//     {
//         reminder = num % 10;
//         rev = rev * 10 + reminder;
//         num = num / 10;
//     }
//         printf("reverse number is: %d",rev);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int a , n , power = 1;
//     printf("enter n :");
//     scanf("%d",&n);
//     printf("enter a :");
//     scanf("%d",&a);

//     while(a != 0)
//     {
//         power *= n;
//         --a;
//     }
//         printf("%d ",power);
// }

// #include<stdio.h>
// int main()
// {
//     int number[] = { 1 , 2 , 3 , 4 , 5 , 6 };
//     int find = 5 ;
//     int i;
//     for(i = 0 ; i < 7 ; i++)
//     {   
//         if( find == number[i])
//         {
//         printf("find at position: %d ",i);
//         break;
//         }
//     }

//      if (i == 10) {
//     printf("The number %d is not in the array.\n", find);
//     }
//     return 0;
// }



// #include <stdio.h>

// int main() {
//   int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//   int targetNumber = 8;
//   int i;

//   for (i = 0; i < 10; i++) {
//     if (numbers[i] == targetNumber) {
//       printf("The number %d is at index %d.\n", targetNumber, i);
//       break;
//     }
//   }

//   if (i == 10) {
//     printf("The number %d is not in the array.\n", targetNumber);
//   }

//   return 0;
// }
