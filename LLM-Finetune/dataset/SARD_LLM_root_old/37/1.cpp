#include "std_testcase.h"
#include <wchar.h>
namespace FUNC_new_wchar_t_09
{
void norm()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new wchar_t;
        *data = L'A';
        printHexCharLine((char)*data);
    }
    if(GLOBAL_CONST_TRUE)
    {
        
        ; 
    }
}
} 
using namespace FUNC_new_wchar_t_09; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    norm();
    return 0;
}
