#include "std_testcase.h"
#include <wchar.h>
typedef union
{
    twoIntsStruct * unionFirst;
    twoIntsStruct * unionSecond;
} CWE401_Memory_Leak__twoIntsStruct_malloc_34_unionType;
static void normG2B()
{
    twoIntsStruct * data;
    CWE401_Memory_Leak__twoIntsStruct_malloc_34_unionType myUnion;
    data = NULL;
    data = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
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
    normG2B();
    return 0;
}
