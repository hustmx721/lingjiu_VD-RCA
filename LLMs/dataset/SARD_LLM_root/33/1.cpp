#include "std_testcase.h"
#include <wchar.h>
static int staticTrue = 1; 
static int staticFalse = 0; 
namespace FUNC_new_TwoIntsClass_05
{
void norm()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticTrue)
    {
        data = new TwoIntsClass;
        data->intOne = 0;
        data->intTwo = 0;
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
    }
    if(staticTrue)
    {
        
        ; 
    }
}
} 
using namespace FUNC_new_TwoIntsClass_05; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    norm();
    return 0;
}
