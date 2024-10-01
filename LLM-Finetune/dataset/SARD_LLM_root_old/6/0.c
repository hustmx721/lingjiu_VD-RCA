#include "std_testcase.h"
#include <wchar.h>
static void normG2BSink(int64_t * data)
{
    ; 
}
static void normG2B()
{
    int64_t * data;
    void (*funcPtr) (int64_t *) = normG2BSink;
    data = NULL;
    data = (int64_t *)ALLOCA(100*sizeof(int64_t));
    data[0] = 5LL;
    printLongLongLine(data[0]);
    funcPtr(data);
}
static void normB2GSink(int64_t * data)
{
    free(data);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normG2B();
    return 0;
}
