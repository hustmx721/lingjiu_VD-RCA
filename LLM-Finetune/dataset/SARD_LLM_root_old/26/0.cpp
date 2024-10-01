#include "std_testcase.h"
#include <wchar.h>
namespace CWE401_Memory_Leak__new_char_44
{
static void normG2BSink(char * data)
{
    ; 
}
static void normG2B()
{
    char * data;
    void (*funcPtr) (char *) = normG2BSink;
    data = NULL;
    char dataGoodBuffer;
    data = &dataGoodBuffer;
    *data = 'A';
    printHexCharLine(*data);
    funcPtr(data);
}
static void normB2GSink(char * data)
{
    delete data;
}
} 
using namespace CWE401_Memory_Leak__new_char_44; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normG2B();
    return 0;
}
