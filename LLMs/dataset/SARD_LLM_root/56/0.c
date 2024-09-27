#include "std_testcase.h"
#include <unistd.h>
#define OPEN open
#define CLOSE close
static void goodB2G()
{
    int data;
    data = -1;
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    if (data != -1)
    {
        CLOSE(data);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    goodB2G();
    return 0;
}
