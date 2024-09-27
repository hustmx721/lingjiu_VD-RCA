#include "std_testcase.h"
#include <windows.h>
static int staticTrue = 1; 
static int staticFalse = 0; 
static void goodB2G1()
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
    if(staticFalse)
    {
    }
    else
    {
        if (data != INVALID_HANDLE_VALUE)
        {
            CloseHandle(data);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    goodB2G1();
    return 0;
}
