#include "std_testcase.h"
#include <wchar.h>
static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
namespace FUNC_new_array_wchar_t_04
{
void norm()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new wchar_t[100];
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(STATIC_CONST_TRUE)
    {
        
        ; 
    }
}
} 
using namespace FUNC_new_array_wchar_t_04; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    norm();
    return 0;
}
