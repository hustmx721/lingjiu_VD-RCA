#include "std_testcase.h"
#include <wchar.h>
namespace CWE401_Memory_Leak__new_TwoIntsClass_01
{
static void normG2B()
{
    TwoIntsClass * data;
    data = NULL;
    TwoIntsClass dataGoodBuffer;
    data = &dataGoodBuffer;
    data->intOne = 0;
    data->intTwo = 0;
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
    ; 
}
} 
using namespace CWE401_Memory_Leak__new_TwoIntsClass_01; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normG2B();
    return 0;
}
