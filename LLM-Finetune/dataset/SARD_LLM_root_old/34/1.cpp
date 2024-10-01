#include "std_testcase.h"
#include <wchar.h>
namespace FUNC_new_twoIntsStruct_14
{
void norm()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new twoIntsStruct;
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine(data);
    }
    if(globalFive==5)
    {
        
        ; 
    }
}
} 
using namespace FUNC_new_twoIntsStruct_14; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    norm();
    return 0;
}
