#include "std_testcase.h"
#include <wchar.h>
void FUNC_int64_t_realloc_03_norm()
{
    int64_t * data;
    data = NULL;
    if(5==5)
    {
        data = (int64_t *)realloc(data, 100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    if(5==5)
    {
        
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    FUNC_int64_t_realloc_03_norm();
    return 0;
}
