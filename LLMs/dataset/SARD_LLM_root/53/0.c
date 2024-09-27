#include "std_testcase.h"
static void goodB2GSink(FILE * data)
{
    if (data != NULL)
    {
        fclose(data);
    }
}
static void goodB2G()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    goodB2GSink(data);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    goodB2G();
    return 0;
}
