#include "std_testcase.h"
void CWE404_Improper_Resource_Shutdown__freopen_w32_close_09_bad()
{
    FILE * data;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    if(GLOBAL_CONST_TRUE)
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
    CWE404_Improper_Resource_Shutdown__freopen_w32_close_09_bad();
    return 0;
}
