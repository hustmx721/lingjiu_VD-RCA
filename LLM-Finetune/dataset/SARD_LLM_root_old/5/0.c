#include "std_testcase.h"
#include <wchar.h>
static void normB2G1()
{
    int64_t * data;
    data = NULL;
    if(1)
    {
        data = (int64_t *)calloc(100, sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    if(0)
    {
    }
    else
    {
        free(data);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normB2G1();
    return 0;
}
