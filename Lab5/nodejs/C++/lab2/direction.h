#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <iostream>

using namespace std;

int gpio_set_dir(unsigned int gpio, string dirStatus)
{
	int fd;
	char buf[64];

    snprintf(buf,sizeof(buf),"/sys/class/gpio/gpio%d/direction",gpio);
	
    fd = open(buf, O_WRONLY);
	if (fd<0)
	{
		perror("gpio/direction");
		return fd;
	}

    if(dirStatus=="out")
        write(fd,"out",4);
    else
        write(fd,"in",3);

	close(fd);
	return 0;
}
