#include "std_testcase.h"
#include <wchar.h>
void FUNC_int_calloc_18_norm()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = (int *)calloc(100, sizeof(int));
    if (data == NULL) {exit(-1);}
    data[0] = 5;
    printIntLine(data[0]);
    goto sink;
sink:
    
    ; 
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    FUNC_int_calloc_18_norm();
    return 0;
}
