#include "std_testcase.h"
#include <wchar.h>
namespace FUNC_new_array_char_02
{
void norm()
{
    char * data;
    data = NULL;
    if(1)
    {
        data = new char[100];
        strcpy(data, "A String");
        printLine(data);
    }
    if(1)
    {
        
        ; 
    }
}
} 
using namespace FUNC_new_array_char_02; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    norm();
    return 0;
}
