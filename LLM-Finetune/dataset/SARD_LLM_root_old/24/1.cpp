#include "std_testcase.h"
#include <wchar.h>
namespace FUNC_new_array_wchar_t_34
{
typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} unionType;
void norm()
{
    wchar_t * data;
    unionType myUnion;
    data = NULL;
    data = new wchar_t[100];
    wcscpy(data, L"A String");
    printWLine(data);
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        
        ; 
    }
}
} 
using namespace FUNC_new_array_wchar_t_34; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    norm();
    return 0;
}
