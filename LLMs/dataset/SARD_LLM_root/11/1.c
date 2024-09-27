#include "std_testcase.h"
#include <wchar.h>
void FUNC_malloc_realloc_char_15_norm()
{
    switch(6)
    {
    case 6:
    {
        char * data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        strcpy(data, "A String");
        printLine(data);
        data = (char *)realloc(data, (130000)*sizeof(char));
        if (data != NULL)
        {
            strcpy(data, "New String");
            printLine(data);
            free(data);
        }
    }
    break;
    default:
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    FUNC_malloc_realloc_char_15_norm();
    return 0;
}
