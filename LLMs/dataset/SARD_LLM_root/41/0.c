#include "std_testcase.h"
#include <wchar.h>
static struct _twoIntsStruct * normG2BSource(struct _twoIntsStruct * data)
{
    data = (struct _twoIntsStruct *)ALLOCA(100*sizeof(struct _twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    return data;
}
static struct _twoIntsStruct * normB2GSource(struct _twoIntsStruct * data)
{
    data = (struct _twoIntsStruct *)malloc(100*sizeof(struct _twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    return data;
}
static void normB2G()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = normB2GSource(data);
    free(data);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normB2G();
    return 0;
}
