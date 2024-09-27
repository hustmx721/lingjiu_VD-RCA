#include "std_testcase.h"
#include <wchar.h>
typedef union
{
    twoIntsStruct * unionFirst;
    twoIntsStruct * unionSecond;
} FUNC_twoIntsStruct_malloc_34_unionType;
void FUNC_twoIntsStruct_malloc_34_norm()
{
    twoIntsStruct * data;
    FUNC_twoIntsStruct_malloc_34_unionType myUnion;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    myUnion.unionFirst = data;
    {
        twoIntsStruct * data = myUnion.unionSecond;
        
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    FUNC_twoIntsStruct_malloc_34_norm();
    return 0;
}
