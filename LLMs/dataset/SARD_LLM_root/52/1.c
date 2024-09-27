#include "std_testcase.h"
static const int STATIC_CONST_FIVE = 5;
void CWE404_Improper_Resource_Shutdown__fopen_w32_close_06_bad()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    if(STATIC_CONST_FIVE==5)
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
    CWE404_Improper_Resource_Shutdown__fopen_w32_close_06_bad();
    return 0;
}
