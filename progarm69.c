// Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include<stdio.h>

int main()
{
    int n , i ; 
    printf("Enter the length of the array : "); 
    scanf("%d",&n); 

    int arr[n]; 
    printf("Enter the elements of the array \n"); 
    for(i=0 ; i<n ; i++)
    scanf("%d",&arr[i]); 

    int max = arr[0];  
    for(i=0 ; i<n ; i++)
    {
        if(arr[i]>max)
        max = arr[i];
    }

int second = arr[0] ;  
for(i=0 ; i<n ; i++)
{
if(arr[i]<max)
{
    if(arr[i]>second)
    {
        second = arr[i]; 
    }
}
}

printf("Second largest number in the array is : %d",second); 
return 0 ; 

}