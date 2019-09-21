#include "json.h"

int main(int argc, char *argv[])
{
    JValue jv;
    jv["happy"] = true;
    jv["name"] = "Niels";
    jv["answer"]["everything"] = 66;

    printf("%s\n", jv.styleWrite().c_str());
    printf("%s\n", jv.writePList().c_str());

    return 0;
}