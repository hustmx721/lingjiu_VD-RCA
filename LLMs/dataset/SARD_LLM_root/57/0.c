#include "std_testcase.h"
#include <unistd.h>
#define OPEN open
#define CLOSE close
static const int STATIC_CONST_FIVE = 5;
static void goodB2G1()
{
    int data;
    data = -1;
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    if(STATIC_CONST_FIVE!=5)
    {
    }
    else
    {
        if (data != -1)
        {
            CLOSE(data);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    goodB2G1();
    return 0;
}
