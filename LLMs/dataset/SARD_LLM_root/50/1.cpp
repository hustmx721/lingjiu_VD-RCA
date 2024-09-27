#include "std_testcase.h"
#include <wchar.h>
namespace FUNC_wchar_t_realloc_33
{
void norm()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    data = NULL;
    data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wcscpy(data, L"A String");
    printWLine(data);
    {
        wchar_t * data = dataRef;
        
        ; 
    }
}
} 
using namespace FUNC_wchar_t_realloc_33; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    norm();
    return 0;
}
