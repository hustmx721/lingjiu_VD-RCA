#include "std_testcase.h"
static void goodB2G1()
{
    FILE * data;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    if(GLOBAL_CONST_FALSE)
    {
    }
    else
    {
        if (data != NULL)
        {
            fclose(data);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    goodB2G1();
    return 0;
}
