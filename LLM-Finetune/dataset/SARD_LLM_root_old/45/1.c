#include "std_testcase.h"
#include <wchar.h>
void FUNC_twoIntsStruct_malloc_18_norm()
{
    twoIntsStruct * data;
    data = NULL;
    goto source;
source:
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    goto sink;
sink:
    
    ; 
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    FUNC_twoIntsStruct_malloc_18_norm();
    return 0;
}
