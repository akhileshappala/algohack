#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d",&a0,&a1,&a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d",&b0,&b1,&b2);
   int count1;
    int count2;
    //for a0 and b0
    if ( a0>b0)
        {
        count1++;
        
    }
    else if (a0<b0 )
        {
         count2++;
        
    }
    else {
        count1= count1;
     count2= count2;
    }
    
    //for a1 and b1
    if ( a1>b1)
        {
        count1++;
        
    }
    else if (a1<b1 )
        {
         count2++;
        
    }
    else {
      count1= count1;
      count2=count2;
    }
    //for a2 and b2
    if ( a2>b2)
        {
        count1++;
        
    }
    else if (a2<b2 )
        {
         count2++;
        
    }
    else {
        count1=count1;
     count2 =count2;
    }
    
    printf("%d %d", count1,count2);
    return 0;
}

