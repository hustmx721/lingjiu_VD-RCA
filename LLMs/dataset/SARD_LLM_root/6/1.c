#include "std_testcase.h"
#include <wchar.h>
static void normSink(int64_t * data)
{
    
    ; 
}
void FUNC_int64_t_calloc_44_norm()
{
    int64_t * data;
    void (*funcPtr) (int64_t *) = normSink;
    data = NULL;
    data = (int64_t *)calloc(100, sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    data[0] = 5LL;
    printLongLongLine(data[0]);
    funcPtr(data);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    FUNC_int64_t_calloc_44_norm();
    return 0;
}
