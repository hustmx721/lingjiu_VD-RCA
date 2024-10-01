#include "std_testcase.h"
#include <wchar.h>
namespace CWE401_Memory_Leak__new_struct_twoIntsStruct_44
{
static void normG2BSink(struct _twoIntsStruct * data)
{
    ; 
}
static void normG2B()
{
    struct _twoIntsStruct * data;
    void (*funcPtr) (struct _twoIntsStruct *) = normG2BSink;
    data = NULL;
    struct _twoIntsStruct dataGoodBuffer;
    data = &dataGoodBuffer;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    funcPtr(data);
}
static void normB2GSink(struct _twoIntsStruct * data)
{
    delete data;
}
} 
using namespace CWE401_Memory_Leak__new_struct_twoIntsStruct_44; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normG2B();
    return 0;
}
