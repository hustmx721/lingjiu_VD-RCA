#include "std_testcase.h"
#include <wchar.h>
void FUNC_malloc_realloc_struct_twoIntsStruct_01_norm()
{
    {
        struct _twoIntsStruct * data = (struct _twoIntsStruct *)malloc(100*sizeof(struct _twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
        data = (struct _twoIntsStruct *)realloc(data, (130000)*sizeof(struct _twoIntsStruct));
        if (data != NULL)
        {
            data[0].intOne = 1;
            data[0].intTwo = 1;
            printStructLine((twoIntsStruct *)&data[0]);
            free(data);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    FUNC_malloc_realloc_struct_twoIntsStruct_01_norm();
    return 0;
}
