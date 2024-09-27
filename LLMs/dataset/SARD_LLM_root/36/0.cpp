#include "std_testcase.h"
#include <wchar.h>
static int staticReturnsTrue()
{
    return 1;
}
static int staticReturnsFalse()
{
    return 0;
}
namespace CWE401_Memory_Leak__new_wchar_t_08
{
static void normB2G1()
{
    wchar_t * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new wchar_t;
        *data = L'A';
        printHexCharLine((char)*data);
    }
    if(staticReturnsFalse())
    {
    }
    else
    {
        delete data;
    }
}
} 
using namespace CWE401_Memory_Leak__new_wchar_t_08; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normB2G1();
    return 0;
}
