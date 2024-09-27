#include "std_testcase.h"
static int staticTrue = 1; 
static int staticFalse = 0; 
static void goodB2G1()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    if(staticFalse)
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
