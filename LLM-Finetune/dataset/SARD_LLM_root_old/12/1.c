#include "std_testcase.h"
#include <wchar.h>
void FUNC_malloc_realloc_int_01_norm()
{
    {
        int * data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        data[0] = 5;
        printIntLine(data[0]);
        data = (int *)realloc(data, (130000)*sizeof(int));
        if (data != NULL)
        {
            data[0] = 10;
            printIntLine(data[0]);
            free(data);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    FUNC_malloc_realloc_int_01_norm();
    return 0;
}
