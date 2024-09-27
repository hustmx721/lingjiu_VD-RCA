#include "std_testcase.h"
#include <wchar.h>
namespace CWE401_Memory_Leak__new_array_wchar_t_34
{
typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} unionType;
static void normG2B()
{
    wchar_t * data;
    unionType myUnion;
    data = NULL;
    wchar_t dataGoodBuffer[100];
    data = dataGoodBuffer;
    wcscpy(data, L"A String");
    printWLine(data);
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        ; 
    }
}
} 
using namespace CWE401_Memory_Leak__new_array_wchar_t_34; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normG2B();
    return 0;
}
