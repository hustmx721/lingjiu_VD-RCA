#include "std_testcase.h"
#include <wchar.h>
namespace FUNC_new_twoIntsStruct_31
{
void norm()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct;
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
using namespace FUNC_new_twoIntsStruct_31; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    norm();
    return 0;
}
