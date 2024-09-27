#include "std_testcase.h"
#include <wchar.h>
void FUNC_strdup_char_31_norm()
{
    char * data;
    data = NULL;
    {
        char myString[] = "myString";
        data = strdup(myString);
        printLine(data);
    }
    {
        char * dataCopy = data;
        char * data = dataCopy;
        
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    FUNC_strdup_char_31_norm();
    return 0;
}
