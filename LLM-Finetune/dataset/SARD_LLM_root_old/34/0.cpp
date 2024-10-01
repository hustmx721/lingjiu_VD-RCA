#include "std_testcase.h"
#include <wchar.h>
namespace CWE401_Memory_Leak__new_twoIntsStruct_14
{
static void normB2G1()
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
    if(globalFive!=5)
    {
    }
    else
    {
        delete data;
    }
}
} 
using namespace CWE401_Memory_Leak__new_twoIntsStruct_14; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normB2G1();
    return 0;
}
