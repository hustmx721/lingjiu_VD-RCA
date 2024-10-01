#include "std_testcase.h"
#include <wchar.h>
namespace CWE401_Memory_Leak__new_int64_t_21
{
static int normB2G1Static = 0;
static int normB2G2Static = 0;
static int normG2bStatic = 0;
static void normB2G1Sink(int64_t * data)
{
    if(normB2G1Static)
    {
    }
    else
    {
        delete data;
    }
}
static void normB2G1()
{
    int64_t * data;
    data = NULL;
    data = new int64_t;
    *data = 5LL;
    printLongLongLine(*data);
    normB2G1Static = 0; 
    normB2G1Sink(data);
}
static void normB2G2Sink(int64_t * data)
{
    if(normB2G2Static)
    {
        delete data;
    }
}
static void normG2BSink(int64_t * data)
{
    if(normG2bStatic)
    {
        ; 
    }
}
} 
using namespace CWE401_Memory_Leak__new_int64_t_21; 
int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    normB2G1();
    return 0;
}
