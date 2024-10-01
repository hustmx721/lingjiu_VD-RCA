#include "std_testcase.h"
#include <wchar.h>
namespace FUNC_new_array_twointsStruct_31
{
void norm()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    {
        twoIntsStruct * dataCopy = data;
        twoIntsStruct * data = dataCopy;
        
        ; 
    }
}
} 
using namespace FUNC_new_array_twointsStruct_31; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    norm();
    return 0;
}
