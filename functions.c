#include<stdio.h>
    
    void swap(int p, int q){
        int r;
        r = p ;
        p = q;
        q = r;
        printf("\n value of p and q in swap () :");
        printf("\n p = %d \n q = %d",p,q);
        
    }
    void main (){
        int p,q;
        printf("enter a number :");
        scanf("%d%d",&p,&q);
        swap(p,q);
        printf("\n Value in main()");
        printf("\n p=%d \n q=%d",p,q);
        
        
    }