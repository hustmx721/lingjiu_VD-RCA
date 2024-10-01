#include "std_testcase.h"
#include <wchar.h>
static void normSink(int64_t * data)
{
    
    ; 
}
void FUNC_int64_t_realloc_41_norm()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)realloc(data, 100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    data[0] = 5LL;
    printLongLongLine(data[0]);
    normSink(data);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    FUNC_int64_t_realloc_41_norm();
    return 0;
}
