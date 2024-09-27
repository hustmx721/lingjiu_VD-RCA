#include "std_testcase.h"
#include <wchar.h>
namespace CWE401_Memory_Leak__new_array_char_02
{
static void normB2G1()
{
    char * data;
    data = NULL;
    if(1)
    {
        data = new char[100];
        strcpy(data, "A String");
        printLine(data);
    }
    if(0)
    {
    }
    else
    {
        delete[] data;
    }
}
} 
using namespace CWE401_Memory_Leak__new_array_char_02; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normB2G1();
    return 0;
}
