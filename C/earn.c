#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
        if ( argc !=2 )
        {
                printf("usage: %s filename hours", argv[0] );    
        }
        else
        {
                int w = 28;
                int h = atoi(argv[1]);
                int e = (w * h);
                printf("%d", e);
        }
}
