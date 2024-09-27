#include "std_testcase.h"
#include <wchar.h>
static int staticReturnsTrue()
{
    return 1;
}
static int staticReturnsFalse()
{
    return 0;
}
void FUNC_malloc_realloc_int_08_norm()
{
    if(staticReturnsTrue())
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
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    FUNC_malloc_realloc_int_08_norm();
    return 0;
}
