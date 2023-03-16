#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <iostream>

using namespace std;

int gpio_export(unsigned int gpio)
{
    int fd, len;
    char buf[64];

    fd = open("/sys/class/gpio/export", O_WRONLY);
    if (fd < 0)
    {
        perror("gpio/export");
        return fd;
    }

    len = snprintf(buf, sizeof(buf), "%d", gpio);
    write(fd, buf, len);
    close(fd);

    return 0;
}

int gpio_unexport(unsigned int gpio)
{
    int fd, len;
    char buf[64];

    fd = open("/sys/class/gpio/unexport", O_WRONLY);
    if (fd < 0)
    {
        perror("gpio/unexport");
        return fd;
    }

    len = snprintf(buf, sizeof(buf), "%d", gpio);
    write(fd, buf, len);
    close(fd);

    return 0;
}

int gpio_set_dir(unsigned int gpio, string dirStatus)
{
    int fd;
    char buf[64];

    snprintf(buf, sizeof(buf), "/sys/class/gpio/gpio%d/direction", gpio);

    fd = open(buf, O_WRONLY);
    if (fd < 0)
    {
        perror("gpio/direction");
        return fd;
    }

    if (dirStatus == "out")
    {
        write(fd, "out", 4);
    }
    else
    {
        write(fd, "in", 3);
    }
    close(fd);

    return 0;
}

int gpio_set_value(unsigned int gpio, int value)
{
    int fd;
    char buf[64];

    snprintf(buf, sizeof(buf), "/sys/class/gpio/gpio%d/value", gpio);

    fd = open(buf, O_WRONLY);
    if (fd < 0)
    {
        perror("gpio/value");
        return fd;
    }

    if (value == 0)
    {
        write(fd, "0", 2);
    }
    else
    {
        write(fd, "1", 2);
    }
    close(fd);

    return 0;
}

int main(int argc, char *argv[])
{
    int input;
    std::cout << "input 1 to enable gpio255 and set up status to 1\ninput 2 to unable gpio255 and set up status to 0\n>>>";
    std::cin >> input;

    //gpio_port 396 255 398 388 
    /*if(input == 1)
    {
        gpio_export(396);
        gpio_set_dir(396, "out");
        gpio_set_value(396, 1);
    }
    else if (input == 2)
    {
        gpio_set_value(396, 0);
        gpio_unexport(396);
    }*/
    //先試試gpio396 ls跑看看有沒有出現

    if (string(argv[1]) == "led1")
    {
        if (string(argv[2]) == "on")
        {
            /*gpio_export(396);
            gpio_set_dir(396, "out");
            gpio_set_value(396, 1);*/
            std::cout << "led1 on" << endl;
        }
        else if (string(argv[2]) == "off")
        {
            /*gpio_set_value(396, 0);
            gpio_unexport(396);*/
            std::cout << "led1 off" << endl;
        }
    }
    else if (string(argv[1]) == "led2")
    {
        if (string(argv[2]) == "on")
        {
            /*gpio_export(255);
            gpio_set_dir(255, "out");
            gpio_set_value(255, 1);*/
            std::cout << "led2 on" << endl;
        }
        else if (string(argv[2]) == "off")
        {
            /*gpio_set_value(255, 0);
            gpio_unexport(255);*/
            std::cout << "led2 off" << endl;
        }
    }
    else if (string(argv[1]) == "led3")
    {
        if (string(argv[2]) == "on")
        {
            /*gpio_export(398);
            gpio_set_dir(398, "out");
            gpio_set_value(398, 1);*/
            std::cout << "led3 on" << endl;
        }
        else if (string(argv[2]) == "off")
        {
            /*gpio_set_value(398, 0);
            gpio_unexport(398);*/
            std::cout << "led3 off" << endl;
        }
    }
    else if (string(argv[1]) == "led4")
    {
        if (string(argv[2]) == "on")
        {
            /*gpio_export(388);
            gpio_set_dir(388, "out");
            gpio_set_value(388, 1);*/
            std::cout << "led4 on" << endl;
        }
        else if (string(argv[2]) == "off")
        {
            /*gpio_set_value(388, 0);
            gpio_unexport(388);*/
            std::cout << "led4 off" << endl;
        }
    }
    return 0;
}