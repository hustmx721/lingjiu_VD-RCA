#include "std_testcase.h"
#include <wchar.h>
namespace FUNC_new_int_10
{
void norm()
{
    int * data;
    data = NULL;
    if(globalTrue)
    {
        data = new int;
        *data = 5;
        printIntLine(*data);
    }
    if(globalTrue)
    {
        
        ; 
    }
}
} 
using namespace FUNC_new_int_10; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    norm();
    return 0;
}
