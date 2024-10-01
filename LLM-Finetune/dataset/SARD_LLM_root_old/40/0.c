#include "std_testcase.h"
#include <wchar.h>
static int staticReturnsTrue()
{
    return 1;
}
static int staticReturnsFalse()
{
    return 0;
}
static void normB2G1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (struct _twoIntsStruct *)malloc(100*sizeof(struct _twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    if(staticReturnsFalse())
    {
    }
    else
    {
        free(data);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normB2G1();
    return 0;
}
