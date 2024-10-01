#include "std_testcase.h"
#include <wchar.h>
namespace CWE401_Memory_Leak__new_array_char_34
{
typedef union
{
    char * unionFirst;
    char * unionSecond;
} unionType;
static void normG2B()
{
    char * data;
    unionType myUnion;
    data = NULL;
    char dataGoodBuffer[100];
    data = dataGoodBuffer;
    strcpy(data, "A String");
    printLine(data);
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        ; 
    }
}
} 
using namespace CWE401_Memory_Leak__new_array_char_34; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normG2B();
    return 0;
}
