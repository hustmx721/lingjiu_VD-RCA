#include "std_testcase.h"
#include <wchar.h>
void FUNC_wchar_t_malloc_10_norm()
{
    wchar_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(globalTrue)
    {
        
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    FUNC_wchar_t_malloc_10_norm();
    return 0;
}
