#include "std_testcase.h"
#include <wchar.h>
static const int STATIC_CONST_FIVE = 5;
static void normB2G1()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        strcpy(data, "A String");
        printLine(data);
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
