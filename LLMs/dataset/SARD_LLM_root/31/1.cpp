#include "std_testcase.h"
#include <wchar.h>
namespace FUNC_new_struct_twoIntsStruct_44
{
static void normSink(struct _twoIntsStruct * data)
{
    
    ; 
}
void norm()
{
    struct _twoIntsStruct * data;
    void (*funcPtr) (struct _twoIntsStruct *) = normSink;
    data = NULL;
    data = new struct _twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    funcPtr(data);
}
} 
using namespace FUNC_new_struct_twoIntsStruct_44; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    norm();
    return 0;
}
