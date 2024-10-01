#include "std_testcase.h"
#include <wchar.h>
static const int STATIC_CONST_FIVE = 5;
void FUNC_int_malloc_06_norm()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(STATIC_CONST_FIVE==5)
    {
        
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    FUNC_int_malloc_06_norm();
    return 0;
}
