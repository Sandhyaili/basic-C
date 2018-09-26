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

#include <stdio.h>
int a=10;
int main()
{
    int a=20;
    int b=10;
    int c=0;
    printf("the value of a in main() is %d\n", a);
    printf("the value of c in main () is %d\n,", c);
    c=sum(a,b);
    printf("the value of b in main() is %d\n", c);
}
int sum (int a, int b)
{int c;
    c=a+b;
    printf("the value of c in main() is %d\n", c);
    return a+b;
}
