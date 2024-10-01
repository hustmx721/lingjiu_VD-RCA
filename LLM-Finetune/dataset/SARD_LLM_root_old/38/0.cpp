#include "std_testcase.h"
#include <wchar.h>
namespace CWE401_Memory_Leak__new_wchar_t_41
{
static void normG2BSink(wchar_t * data)
{
    ; 
}
static void normG2B()
{
    wchar_t * data;
    data = NULL;
    wchar_t dataGoodBuffer;
    data = &dataGoodBuffer;
    *data = L'A';
    printHexCharLine((char)*data);
    normG2BSink(data);
}
static void normB2GSink(wchar_t * data)
{
    delete data;
}
} 
using namespace CWE401_Memory_Leak__new_wchar_t_41; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normG2B();
    return 0;
}
