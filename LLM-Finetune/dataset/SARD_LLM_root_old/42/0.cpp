#include "std_testcase.h"
#include <wchar.h>
namespace CWE401_Memory_Leak__struct_twoIntsStruct_realloc_33
{
static void normG2B()
{
    struct _twoIntsStruct * data;
    struct _twoIntsStruct * &dataRef = data;
    data = NULL;
    data = (struct _twoIntsStruct *)ALLOCA(100*sizeof(struct _twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    {
        struct _twoIntsStruct * data = dataRef;
        ; 
    }
}
} 
using namespace CWE401_Memory_Leak__struct_twoIntsStruct_realloc_33; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normG2B();
    return 0;
}
