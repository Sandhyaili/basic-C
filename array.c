#include <stdio.h>
int main()
{
    int n[10];
    int i;
    for(i=0;i<10;i++)
    {
        n[i]=i+100;
        printf("element[%d]=%d\n", i,n[i]);
        
    }
}
output:
element[0]=100                                                                                                                   
element[1]=101                                                                                                                   
element[2]=102                                                                                                                   
element[3]=103                                                                                                                   
element[4]=104                                                                                                                   
element[5]=105                                                                                                                   
element[6]=106                                                                                                                   
element[7]=107                                                                                                                   
element[8]=108                                                                                                                   
element[9]=109 
