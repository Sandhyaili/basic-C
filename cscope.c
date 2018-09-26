#include <stdio.h>
int main()
{ 
    int a , b , c  ; /* local varialble declaration */
   
    printf("enter two numbers\n");
    scanf("%d%d", &a ,&b );
    c=a+b;
    printf("the sum is %d", c);
    return 0;
}

#include <stdio.h>
int g;/* global variable declaration*/
int main()
{ 
    int a , b ,g ;
    a=10;
    b=20;
    g=a+b;
    printf("value of a=%d , b=%d , g=%d\n", a, b, g);
    return 0;
    
}

#include <stdio.h>
int g=10;
int main()
{ 
    int g=20;
    printf("  g=%d\n", g);
    return 0;
    

}
output g=20
LOCAL VARIABLES HAS HIGHER PRIORITY THAN GLOBAL VARIABLE, WHEN A VARIABLE FIRST DEFINED GLOBALLY , THE SAME VARIABLE IS ALSO USED LOCALLY.
