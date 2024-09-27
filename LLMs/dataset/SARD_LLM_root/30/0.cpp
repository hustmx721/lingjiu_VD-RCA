#include "std_testcase.h"
#include <wchar.h>
static int staticTrue = 1; 
static int staticFalse = 0; 
namespace CWE401_Memory_Leak__new_struct_twoIntsStruct_05
{
static void normB2G1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(staticTrue)
    {
        data = new struct _twoIntsStruct;
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine((twoIntsStruct *)data);
    }
    if(staticFalse)
    {
    }
    else
    {
        delete data;
    }
}
} 
using namespace CWE401_Memory_Leak__new_struct_twoIntsStruct_05; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normB2G1();
    return 0;
}
