#include "std_testcase.h"
#include <wchar.h>
void FUNC_malloc_realloc_twoIntsStruct_17_norm()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            twoIntsStruct * data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
            if (data == NULL) {exit(-1);}
            data[0].intOne = 0;
            data[0].intTwo = 0;
            printStructLine(&data[0]);
            data = (twoIntsStruct *)realloc(data, (130000)*sizeof(twoIntsStruct));
            if (data != NULL)
            {
                data[0].intOne = 1;
                data[0].intTwo = 1;
                printStructLine(&data[0]);
                free(data);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    FUNC_malloc_realloc_twoIntsStruct_17_norm();
    return 0;
}
