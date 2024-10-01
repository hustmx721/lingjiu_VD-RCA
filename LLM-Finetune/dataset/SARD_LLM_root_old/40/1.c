#include "std_testcase.h"
#include <wchar.h>
static int staticReturnsTrue()
{
    return 1;
}
static int staticReturnsFalse()
{
    return 0;
}
void FUNC_struct_twoIntsStruct_malloc_08_norm()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (struct _twoIntsStruct *)malloc(100*sizeof(struct _twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    if(staticReturnsTrue())
    {
        
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    FUNC_struct_twoIntsStruct_malloc_08_norm();
    return 0;
}
