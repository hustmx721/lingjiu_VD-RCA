#include "std_testcase.h"
#include <wchar.h>
namespace FUNC_new_array_char_34
{
typedef union
{
    char * unionFirst;
    char * unionSecond;
} unionType;
void norm()
{
    char * data;
    unionType myUnion;
    data = NULL;
    data = new char[100];
    strcpy(data, "A String");
    printLine(data);
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        
        ; 
    }
}
} 
using namespace FUNC_new_array_char_34; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    norm();
    return 0;
}
