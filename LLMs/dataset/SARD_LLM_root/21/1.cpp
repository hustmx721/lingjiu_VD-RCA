#include "std_testcase.h"
#include <wchar.h>
namespace FUNC_new_array_TwoIntsClass_16
{
void norm()
{
    TwoIntsClass * data;
    data = NULL;
    while(1)
    {
        data = new TwoIntsClass[100];
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printIntLine(data[0].intOne);
        printIntLine(data[0].intTwo);
        break;
    }
    while(1)
    {
        
        ; 
        break;
    }
}
} 
using namespace FUNC_new_array_TwoIntsClass_16; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    norm();
    return 0;
}
