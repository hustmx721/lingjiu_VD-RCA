#include "std_testcase.h"
#include <wchar.h>
namespace CWE401_Memory_Leak__new_array_twointsStruct_31
{
static void normG2B()
{
    twoIntsStruct * data;
    data = NULL;
    twoIntsStruct dataGoodBuffer[100];
    data = dataGoodBuffer;
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
using namespace CWE401_Memory_Leak__new_array_twointsStruct_31; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normG2B();
    return 0;
}
