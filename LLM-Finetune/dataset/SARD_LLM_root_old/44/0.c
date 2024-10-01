#include "std_testcase.h"
#include <wchar.h>
static void normG2BSink(twoIntsStruct * data)
{
    ; 
}
static void normB2GSink(twoIntsStruct * data)
{
    free(data);
}
static void normB2G()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    normB2GSink(data);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normB2G();
    return 0;
}
