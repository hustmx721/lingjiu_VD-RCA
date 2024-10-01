#include "std_testcase.h"
#include <wchar.h>
static char * normSource(char * data)
{
    data = (char *)calloc(100, sizeof(char));
    if (data == NULL) {exit(-1);}
    strcpy(data, "A String");
    printLine(data);
    return data;
}
void FUNC_char_calloc_42_norm()
{
    char * data;
    data = NULL;
    data = normSource(data);
    
    ; 
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    FUNC_char_calloc_42_norm();
    return 0;
}
