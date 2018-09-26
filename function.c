A function declaration tells the compiler about a function's name, return type, and parameters. A function definition provides the 
actual body of the function.
what is meant by function declaration?

Function declaration is required when you define a function in one source file and you call that function in another file. In such case, you should declare the function at the top of the file 
calling the function.
i didnt understand the above statement?

When a program calls a function, the program control is transferred to the called function.
whatb is progarm control?
  #include <stdio.h>
int max(int num1,int num2);
int main()
{
    int a = 100;
    int b = 200;
    int ret;
    ret=max( a , b );
    printf("max is :%d\n" , ret);
    return 0;
}
int max(int num1,int num2)
{
    int result;
    if(num1>num2)
    result=num1;
    else
    result=num2;
    return result;
}
output max is 200
  
 #include <stdio.h>
int main()
{
    int a = 100;
    int b = 200;
    int ret;
    ret=max( a , b );
    printf("max is :%d\n" , ret);
    return 0;
}
int max(int num1,int num2)
{
    int result;
    if(num1>num2)
    result=num1;
    else
    result=num2;
    return result;
}
output max is 200

  
  
#include <stdio.h>
int max(int num1,int num2)
{
    int result;
    if(num1>num2)
    result=num1;
    else
    result=num2;
    return result;
}
int main()
{
    int a = 100;
    int b = 200;
    int ret;
    ret=max( a , b );
    printf("max is :%d\n" , ret);
    return 0;
}
output max is 200

#include <stdio.h>
int main()
{
    int a , b , ret;
    printf("enter two numbers\n");
    scanf("%d%d" , &a ,&b);
    ret=max( a , b );
    printf("max is :%d\n" , ret);
    return 0;
}
int max( int a, int b)
{
    int result;
    if(a>b)
    result=a;
    else
    result=b;
    return result;
}
