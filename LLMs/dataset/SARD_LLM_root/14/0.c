#include "std_testcase.h"
#include <wchar.h>
static void norm1()
{
    {
        struct _twoIntsStruct * data = (struct _twoIntsStruct *)malloc(100*sizeof(struct _twoIntsStruct));
        if (data == NULL) {exit(-1);}
        struct _twoIntsStruct * tmpData;
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
        tmpData = (struct _twoIntsStruct *)realloc(data, (130000)*sizeof(struct _twoIntsStruct));
        if (tmpData != NULL)
        {
            data = tmpData;
            data[0].intOne = 1;
            data[0].intTwo = 1;
            printStructLine((twoIntsStruct *)&data[0]);
        }
        free(data);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    norm1();
    return 0;
}
