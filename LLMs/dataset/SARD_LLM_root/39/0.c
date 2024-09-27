#include "std_testcase.h"
#include <wchar.h>
static void normG2B()
{
    char * data;
    data = NULL;
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "a string");
    printLine(data);
    {
        char * dataCopy = data;
        char * data = dataCopy;
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normG2B();
    return 0;
}
