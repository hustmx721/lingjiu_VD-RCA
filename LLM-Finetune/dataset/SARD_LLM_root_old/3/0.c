#include "std_testcase.h"
#include <wchar.h>
static void normB2G()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = (int *)calloc(100, sizeof(int));
    if (data == NULL) {exit(-1);}
    data[0] = 5;
    printIntLine(data[0]);
    goto sink;
sink:
    free(data);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normB2G();
    return 0;
}
