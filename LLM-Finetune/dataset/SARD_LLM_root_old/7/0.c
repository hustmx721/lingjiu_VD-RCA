#include "std_testcase.h"
#include <wchar.h>
static void normB2G()
{
    int i,k;
    int64_t * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    for(k = 0; k < 1; k++)
    {
        free(data);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normB2G();
    return 0;
}
