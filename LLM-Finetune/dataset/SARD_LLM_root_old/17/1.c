#include "std_testcase.h"
#include <wchar.h>
static int staticFive = 5;
void FUNC_malloc_realloc_wchar_t_07_norm()
{
    if(staticFive==5)
    {
        {
            wchar_t * data = (wchar_t *)malloc(100*sizeof(wchar_t));
            if (data == NULL) {exit(-1);}
            wcscpy(data, L"A String");
            printWLine(data);
            data = (wchar_t *)realloc(data, (130000)*sizeof(wchar_t));
            if (data != NULL)
            {
                wcscpy(data, L"New String");
                printWLine(data);
                free(data);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    FUNC_malloc_realloc_wchar_t_07_norm();
    return 0;
}
