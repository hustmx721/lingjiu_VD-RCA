#include "std_testcase.h"
#include <wchar.h>
static int staticReturnsTrue()
{
    return 1;
}
static int staticReturnsFalse()
{
    return 0;
}
static void norm1()
{
    if(staticReturnsFalse())
    {
    }
    else
    {
        {
            int * data = (int *)malloc(100*sizeof(int));
            if (data == NULL) {exit(-1);}
            int * tmpData;
            data[0] = 5;
            printIntLine(data[0]);
            tmpData = (int *)realloc(data, (130000)*sizeof(int));
            if (tmpData != NULL)
            {
                data = tmpData;
                data[0] = 10;
                printIntLine(data[0]);
            }
            free(data);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    norm1();
    return 0;
}
