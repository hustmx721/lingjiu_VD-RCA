#include "std_testcase.h"
#include <wchar.h>
namespace FUNC_new_char_32
{
void norm()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    data = NULL;
    {
        char * data = *dataPtr1;
        data = new char;
        *data = 'A';
        printHexCharLine(*data);
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        
        ; 
    }
}
} 
using namespace FUNC_new_char_32; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    norm();
    return 0;
}
