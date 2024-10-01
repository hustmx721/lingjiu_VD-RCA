#include "std_testcase.h"
#include <wchar.h>
void FUNC_twoIntsStruct_malloc_32_norm()
{
    twoIntsStruct * data;
    twoIntsStruct * *dataPtr1 = &data;
    twoIntsStruct * *dataPtr2 = &data;
    data = NULL;
    {
        twoIntsStruct * data = *dataPtr1;
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine(&data[0]);
        *dataPtr1 = data;
    }
    {
        twoIntsStruct * data = *dataPtr2;
        
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    FUNC_twoIntsStruct_malloc_32_norm();
    return 0;
}
