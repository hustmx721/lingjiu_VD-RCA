#include "std_testcase.h"
#include <wchar.h>
static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
namespace CWE401_Memory_Leak__new_array_wchar_t_04
{
static void normB2G1()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new wchar_t[100];
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(STATIC_CONST_FALSE)
    {
    }
    else
    {
        delete[] data;
    }
}
} 
using namespace CWE401_Memory_Leak__new_array_wchar_t_04; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normB2G1();
    return 0;
}
