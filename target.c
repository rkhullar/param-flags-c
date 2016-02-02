/*
 * @author  :  Rajan Khullar
 * @created :  02/01/16
 * @updated :  02/01/16
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;
    for(i=1; i<argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return 0;
}