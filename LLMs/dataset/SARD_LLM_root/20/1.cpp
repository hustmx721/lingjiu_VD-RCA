#include "std_testcase.h"
#include <wchar.h>
namespace FUNC_new_array_int64_t_34
{
typedef union
{
    int64_t * unionFirst;
    int64_t * unionSecond;
} unionType;
void norm()
{
    int64_t * data;
    unionType myUnion;
    data = NULL;
    data = new int64_t[100];
    data[0] = 5LL;
    printLongLongLine(data[0]);
    myUnion.unionFirst = data;
    {
        int64_t * data = myUnion.unionSecond;
        
        ; 
    }
}
} 
using namespace FUNC_new_array_int64_t_34; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    norm();
    return 0;
}
