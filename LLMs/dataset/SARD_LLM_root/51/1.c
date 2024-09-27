#include "std_testcase.h"
static int staticTrue = 1; 
static int staticFalse = 0; 
void CWE404_Improper_Resource_Shutdown__fopen_w32_close_05_bad()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    if(staticTrue)
    {
        if (data != NULL)
        {
            _close((int)data);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    CWE404_Improper_Resource_Shutdown__fopen_w32_close_05_bad();
    return 0;
}
