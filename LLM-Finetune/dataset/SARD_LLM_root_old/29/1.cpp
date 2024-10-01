#include "std_testcase.h"
#include <wchar.h>
namespace FUNC_new_int64_t_21
{
static int normStatic = 0;
static void normSink(int64_t * data)
{
    if(normStatic)
    {
        
        ; 
    }
}
void norm()
{
    int64_t * data;
    data = NULL;
    data = new int64_t;
    *data = 5LL;
    printLongLongLine(*data);
    normStatic = 1; 
    normSink(data);
}
} 
using namespace FUNC_new_int64_t_21; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    norm();
    return 0;
}
