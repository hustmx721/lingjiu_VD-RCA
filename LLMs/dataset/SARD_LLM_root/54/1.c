#include "std_testcase.h"
#include <windows.h>
void CWE404_Improper_Resource_Shutdown__fopen_w32CloseHandle_09_bad()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    if(GLOBAL_CONST_TRUE)
    {
        if (data != NULL)
        {
            CloseHandle((HANDLE)data);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    CWE404_Improper_Resource_Shutdown__fopen_w32CloseHandle_09_bad();
    return 0;
}
