#include "std_testcase.h"
#include <windows.h>
static int staticTrue = 1; 
static int staticFalse = 0; 
void CWE404_Improper_Resource_Shutdown__w32CreateFile_fclose_05_bad()
{
    HANDLE data;
    data = INVALID_HANDLE_VALUE;
    data = CreateFile("BadSource_w32CreateFile.txt",
                      (GENERIC_WRITE|GENERIC_READ),
                      0,
                      NULL,
                      OPEN_ALWAYS,
                      FILE_ATTRIBUTE_NORMAL,
                      NULL);
    if(staticTrue)
    {
        if (data != INVALID_HANDLE_VALUE)
        {
            fclose((FILE *)data);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    CWE404_Improper_Resource_Shutdown__w32CreateFile_fclose_05_bad();
    return 0;
}
