#include "std_testcase.h"
#include <wchar.h>
static const int STATIC_CONST_FIVE = 5;
namespace FUNC_new_int_06
{
void norm()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new int;
        *data = 5;
        printIntLine(*data);
    }
    if(STATIC_CONST_FIVE==5)
    {
        
        ; 
    }
}
} 
using namespace FUNC_new_int_06; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    norm();
    return 0;
}
