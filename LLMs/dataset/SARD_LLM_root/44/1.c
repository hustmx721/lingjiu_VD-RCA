#include "std_testcase.h"
#include <wchar.h>
static void normSink(twoIntsStruct * data)
{
    
    ; 
}
void FUNC_twoIntsStruct_calloc_41_norm()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    normSink(data);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    FUNC_twoIntsStruct_calloc_41_norm();
    return 0;
}
