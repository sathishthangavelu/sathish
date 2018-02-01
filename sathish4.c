
#include <stdio.h>
void main ()
{
    char x;
    printf("entre the data x=");
    scanf("%c",&x);
    if(x>='a'&&x<='z'||x>='A'&&x<='Z')
    {
        printf("it is alphabet");
    }
    else
    {
        printf("it is not alphabet");
    }
    
}


