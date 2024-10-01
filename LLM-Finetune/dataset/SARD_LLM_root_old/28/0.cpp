#include "std_testcase.h"
#include <wchar.h>
namespace CWE401_Memory_Leak__new_int_10
{
static void normB2G1()
{
    int * data;
    data = NULL;
    if(globalTrue)
    {
        data = new int;
        *data = 5;
        printIntLine(*data);
    }
    if(globalFalse)
    {
    }
    else
    {
        delete data;
    }
}
} 
using namespace CWE401_Memory_Leak__new_int_10; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normB2G1();
    return 0;
}
