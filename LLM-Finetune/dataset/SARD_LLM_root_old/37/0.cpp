#include "std_testcase.h"
#include <wchar.h>
namespace CWE401_Memory_Leak__new_wchar_t_09
{
static void normB2G1()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new wchar_t;
        *data = L'A';
        printHexCharLine((char)*data);
    }
    if(GLOBAL_CONST_FALSE)
    {
    }
    else
    {
        delete data;
    }
}
} 
using namespace CWE401_Memory_Leak__new_wchar_t_09; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normB2G1();
    return 0;
}
