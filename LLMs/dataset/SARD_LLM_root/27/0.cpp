#include "std_testcase.h"
#include <wchar.h>
static const int STATIC_CONST_FIVE = 5;
namespace CWE401_Memory_Leak__new_int_06
{
static void normB2G1()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new int;
        *data = 5;
        printIntLine(*data);
    }
    if(STATIC_CONST_FIVE!=5)
    {
    }
    else
    {
        delete data;
    }
}
} 
using namespace CWE401_Memory_Leak__new_int_06; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normB2G1();
    return 0;
}
