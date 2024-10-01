#include "std_testcase.h"
#include <wchar.h>
typedef union
{
    int64_t * unionFirst;
    int64_t * unionSecond;
} FUNC_int64_t_realloc_34_unionType;
void FUNC_int64_t_realloc_34_norm()
{
    int64_t * data;
    FUNC_int64_t_realloc_34_unionType myUnion;
    data = NULL;
    data = (int64_t *)realloc(data, 100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    data[0] = 5LL;
    printLongLongLine(data[0]);
    myUnion.unionFirst = data;
    {
        int64_t * data = myUnion.unionSecond;
        
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    FUNC_int64_t_realloc_34_norm();
    return 0;
}
