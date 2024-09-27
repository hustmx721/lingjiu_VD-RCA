#include "std_testcase.h"
#include <wchar.h>
typedef union
{
    int64_t * unionFirst;
    int64_t * unionSecond;
} CWE401_Memory_Leak__int64_t_realloc_34_unionType;
static void normG2B()
{
    int64_t * data;
    CWE401_Memory_Leak__int64_t_realloc_34_unionType myUnion;
    data = NULL;
    data = (int64_t *)ALLOCA(100*sizeof(int64_t));
    data[0] = 5LL;
    printLongLongLine(data[0]);
    myUnion.unionFirst = data;
    {
        int64_t * data = myUnion.unionSecond;
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normG2B();
    return 0;
}
