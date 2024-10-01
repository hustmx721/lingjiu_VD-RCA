#include "std_testcase.h"
#include <wchar.h>
namespace FUNC_new_TwoIntsClass_01
{
void norm()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass;
    data->intOne = 0;
    data->intTwo = 0;
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
    
    ; 
}
} 
using namespace FUNC_new_TwoIntsClass_01; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    norm();
    return 0;
}
