#include "std_testcase.h"
#include <wchar.h>
namespace FUNC_new_char_44
{
static void normSink(char * data)
{
    
    ; 
}
void norm()
{
    char * data;
    void (*funcPtr) (char *) = normSink;
    data = NULL;
    data = new char;
    *data = 'A';
    printHexCharLine(*data);
    funcPtr(data);
}
} 
using namespace FUNC_new_char_44; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    norm();
    return 0;
}
