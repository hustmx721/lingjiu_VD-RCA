#include "std_testcase.h"
#include <wchar.h>
static const int STATIC_CONST_FIVE = 5;
void FUNC_malloc_realloc_twoIntsStruct_06_norm()
{
    if(STATIC_CONST_FIVE==5)
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
    FUNC_malloc_realloc_twoIntsStruct_06_norm();
    return 0;
}
