#include "std_testcase.h"
#include <wchar.h>
void FUNC_int64_t_malloc_17_norm()
{
    int i,j;
    int64_t * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    for(j = 0; j < 1; j++)
    {
        
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    FUNC_int64_t_malloc_17_norm();
    return 0;
}
