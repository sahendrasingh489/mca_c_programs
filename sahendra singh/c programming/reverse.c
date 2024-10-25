#include<stdio.h>

int main(){
    int rev = 0;
    int n, rem ,temp;
    printf("enter a number : "); 
    scanf("%d", &n);
    while(n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem ;
        n   = n/10;
    }
    //printf("reverse number = %d", rev);

    if(temp == rev)
    {
        printf("\n Number is Palindrome");
    } else {
        printf(" the number is not palindrome");
    }
    return 0;
}