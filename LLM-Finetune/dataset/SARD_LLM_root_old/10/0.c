#include "std_testcase.h"
#include <wchar.h>
static void normG2BSink(int64_t * data)
{
    ; 
}
static void normB2GSink(int64_t * data)
{
    free(data);
}
static void normB2G()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)realloc(data, 100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    data[0] = 5LL;
    printLongLongLine(data[0]);
    normB2GSink(data);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normB2G();
    return 0;
}
