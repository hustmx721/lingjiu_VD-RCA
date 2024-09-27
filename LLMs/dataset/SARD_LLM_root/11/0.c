#include "std_testcase.h"
#include <wchar.h>
static void norm1()
{
    switch(5)
    {
    case 6:
        break;
    default:
    {
        char * data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        char * tmpData;
        strcpy(data, "A String");
        printLine(data);
        tmpData = (char *)realloc(data, (130000)*sizeof(char));
        if (tmpData != NULL)
        {
            data = tmpData;
            strcpy(data, "New String");
            printLine(data);
        }
        free(data);
    }
    break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    norm1();
    return 0;
}
