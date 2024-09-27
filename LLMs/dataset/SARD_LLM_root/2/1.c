#include "std_testcase.h"
#include <wchar.h>
static const int STATIC_CONST_FIVE = 5;
void FUNC_char_malloc_06_norm()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        strcpy(data, "A String");
        printLine(data);
    }
    if(STATIC_CONST_FIVE==5)
    {
        
        ; 
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    FUNC_char_malloc_06_norm();
    return 0;
}
