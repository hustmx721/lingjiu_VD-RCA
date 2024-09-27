#include "std_testcase.h"
#include <wchar.h>
namespace CWE401_Memory_Leak__new_array_int64_t_34
{
typedef union
{
    int64_t * unionFirst;
    int64_t * unionSecond;
} unionType;
static void normG2B()
{
    int64_t * data;
    unionType myUnion;
    data = NULL;
    int64_t dataGoodBuffer[100];
    data = dataGoodBuffer;
    data[0] = 5LL;
    printLongLongLine(data[0]);
    myUnion.unionFirst = data;
    {
        int64_t * data = myUnion.unionSecond;
        ; 
    }
}
} 
using namespace CWE401_Memory_Leak__new_array_int64_t_34; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normG2B();
    return 0;
}
