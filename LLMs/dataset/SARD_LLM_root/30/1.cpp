#include "std_testcase.h"
#include <wchar.h>
static int staticTrue = 1; 
static int staticFalse = 0; 
namespace FUNC_new_struct_twoIntsStruct_05
{
void norm()
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
    if(staticTrue)
    {
        
        ; 
    }
}
} 
using namespace FUNC_new_struct_twoIntsStruct_05; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    norm();
    return 0;
}
