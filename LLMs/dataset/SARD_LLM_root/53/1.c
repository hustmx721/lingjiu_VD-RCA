#include "std_testcase.h"
static void badSink(FILE * data)
{
    if (data != NULL)
    {
        _close((int)data);
    }
}
void CWE404_Improper_Resource_Shutdown__fopen_w32_close_41_bad()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    badSink(data);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    CWE404_Improper_Resource_Shutdown__fopen_w32_close_41_bad();
    return 0;
}
