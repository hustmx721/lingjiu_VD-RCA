#include "std_testcase.h"
#include <wchar.h>
namespace CWE401_Memory_Leak__wchar_t_realloc_33
{
static void normG2B()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    data = NULL;
    data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wcscpy(data, L"A String");
    printWLine(data);
    {
        wchar_t * data = dataRef;
        ; 
    }
}
} 
using namespace CWE401_Memory_Leak__wchar_t_realloc_33; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normG2B();
    return 0;
}
