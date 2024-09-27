#include "std_testcase.h"
static const int STATIC_CONST_FIVE = 5;
static void goodB2G1()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    if(STATIC_CONST_FIVE!=5)
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
