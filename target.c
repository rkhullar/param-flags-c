/*
 * @author  :  Rajan Khullar
 * @created :  02/01/16
 * @updated :  02/01/16
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n = 1;
    char *msg = "Hello World";

    int i = 1;
    char flag;
    while(i < argc)
    {
        if(argv[i][0] == '-')
        {
            flag = argv[i][1];
            if(flag == 'm')
                msg = argv[++i];
            if(flag == 'n')
                n = atoi(argv[++i]);
        }
        i++;
    }

    for(i = 0; i < n; i++)
        printf("%s\n", msg);

    return 0;
}