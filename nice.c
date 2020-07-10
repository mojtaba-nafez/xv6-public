#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[])
{
    int value, pid;

    if (argc < 2)
    {
        printf(2, "Usage: nice [pid] [priority or tickets]\n");
        exit();
    }
    pid = atoi(argv[1]);
    value = atoi(argv[2]);

    if (value < 0 || value > 2)
    {
        printf(2, "Invalid priority (0-2)!\n");
        exit();
    }
    set_priority(pid, value);
    exit();
}