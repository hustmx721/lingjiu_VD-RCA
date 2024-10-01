#include "std_testcase.h"
#include <wchar.h>
static struct _twoIntsStruct * normSource(struct _twoIntsStruct * data)
{
    data = (struct _twoIntsStruct *)realloc(data, 100*sizeof(struct _twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    return data;
}
void FUNC_struct_twoIntsStruct_realloc_42_norm()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = normSource(data);
    
    ; 
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    FUNC_struct_twoIntsStruct_realloc_42_norm();
    return 0;
}
