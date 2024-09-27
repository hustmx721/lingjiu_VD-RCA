#include "std_testcase.h"
#include <wchar.h>
static int staticFive = 5;
static void norm1()
{
    if(staticFive!=5)
    {
    }
    else
    {
        {
            wchar_t * data = (wchar_t *)malloc(100*sizeof(wchar_t));
            if (data == NULL) {exit(-1);}
            wchar_t * tmpData;
            wcscpy(data, L"A String");
            printWLine(data);
            tmpData = (wchar_t *)realloc(data, (130000)*sizeof(wchar_t));
            if (tmpData != NULL)
            {
                data = tmpData;
                wcscpy(data, L"New String");
                printWLine(data);
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
