#include "std_testcase.h"
#include <wchar.h>
static int staticTrue = 1; 
static int staticFalse = 0; 
namespace CWE401_Memory_Leak__new_TwoIntsClass_05
{
static void normB2G1()
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
    if(staticFalse)
    {
    }
    else
    {
        delete data;
    }
}
} 
using namespace CWE401_Memory_Leak__new_TwoIntsClass_05; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normB2G1();
    return 0;
}
