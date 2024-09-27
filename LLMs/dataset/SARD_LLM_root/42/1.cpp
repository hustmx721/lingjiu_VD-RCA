#include "std_testcase.h"
#include <wchar.h>
namespace FUNC_struct_twoIntsStruct_realloc_33
{
void norm()
{
    struct _twoIntsStruct * data;
    struct _twoIntsStruct * &dataRef = data;
    data = NULL;
    data = (struct _twoIntsStruct *)realloc(data, 100*sizeof(struct _twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    {
        struct _twoIntsStruct * data = dataRef;
        
        ; 
    }
}
} 
using namespace FUNC_struct_twoIntsStruct_realloc_33; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    norm();
    return 0;
}
