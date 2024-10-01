#include "std_testcase.h"
#include <wchar.h>
static const int STATIC_CONST_FIVE = 5;
static void normB2G1()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(STATIC_CONST_FIVE!=5)
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
