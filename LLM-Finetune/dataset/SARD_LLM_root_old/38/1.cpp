#include "std_testcase.h"
#include <wchar.h>
namespace FUNC_new_wchar_t_41
{
static void normSink(wchar_t * data)
{
    
    ; 
}
void norm()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t;
    *data = L'A';
    printHexCharLine((char)*data);
    normSink(data);
}
} 
using namespace FUNC_new_wchar_t_41; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    norm();
    return 0;
}
