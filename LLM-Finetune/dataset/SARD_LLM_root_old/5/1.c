#include "std_testcase.h"
#include <wchar.h>
void FUNC_int64_t_calloc_02_norm()
{
    int64_t * data;
    data = NULL;
    if(1)
    {
        data = (int64_t *)calloc(100, sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    if(1)
    {
        
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    FUNC_int64_t_calloc_02_norm();
    return 0;
}
