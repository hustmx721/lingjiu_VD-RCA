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
namespace FUNC_new_wchar_t_08
{
void norm()
{
    wchar_t * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new wchar_t;
        *data = L'A';
        printHexCharLine((char)*data);
    }
    if(staticReturnsTrue())
    {
        
        ; 
    }
}
} 
using namespace FUNC_new_wchar_t_08; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    norm();
    return 0;
}
