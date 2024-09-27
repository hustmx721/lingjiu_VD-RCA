#include "std_testcase.h"
#include <unistd.h>
#define OPEN open
#define CLOSE close
void CWE404_Improper_Resource_Shutdown__open_fclose_01_bad()
{
    int data;
    data = -1;
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    if (data != -1)
    {
        fclose((FILE *)data);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    CWE404_Improper_Resource_Shutdown__open_fclose_01_bad();
    return 0;
}
