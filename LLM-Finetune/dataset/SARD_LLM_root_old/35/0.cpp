#include "std_testcase.h"
#include <wchar.h>
namespace CWE401_Memory_Leak__new_twoIntsStruct_31
{
static void normG2B()
{
    twoIntsStruct * data;
    data = NULL;
    twoIntsStruct dataGoodBuffer;
    data = &dataGoodBuffer;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine(data);
    {
        twoIntsStruct * dataCopy = data;
        twoIntsStruct * data = dataCopy;
        ; 
    }
}
} 
using namespace CWE401_Memory_Leak__new_twoIntsStruct_31; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normG2B();
    return 0;
}
