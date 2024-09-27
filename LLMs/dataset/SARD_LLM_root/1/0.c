#include "std_testcase.h"
#include <wchar.h>
static char * normG2BSource(char * data)
{
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    return data;
}
static char * normB2GSource(char * data)
{
    data = (char *)calloc(100, sizeof(char));
    if (data == NULL) {exit(-1);}
    strcpy(data, "A String");
    printLine(data);
    return data;
}
static void normB2G()
{
    char * data;
    data = NULL;
    data = normB2GSource(data);
    free(data);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normB2G();
    return 0;
}
