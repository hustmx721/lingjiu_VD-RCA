#include "std_testcase.h"
#include <wchar.h>
namespace CWE401_Memory_Leak__new_char_32
{
static void normG2B()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    data = NULL;
    {
        char * data = *dataPtr1;
        char dataGoodBuffer;
        data = &dataGoodBuffer;
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
using namespace CWE401_Memory_Leak__new_char_32; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normG2B();
    return 0;
}
