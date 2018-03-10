#include <stdio.h>
#include "logger.h"

int main(void)
{
    initLogr("testlog.log");
    char aString[] = "testing";
    logr(1, "Just logging something, a var: %s", aString);
    termLogr();
    return 0;
}
