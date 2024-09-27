#include "std_testcase.h"
#include <windows.h>
void CWE404_Improper_Resource_Shutdown__w32CreateFile_fclose_31_bad()
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
    {
        HANDLE dataCopy = data;
        HANDLE data = dataCopy;
        if (data != INVALID_HANDLE_VALUE)
        {
            fclose((FILE *)data);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    CWE404_Improper_Resource_Shutdown__w32CreateFile_fclose_31_bad();
    return 0;
}
