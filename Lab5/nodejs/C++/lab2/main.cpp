#include "export.h"
#include "unexport.h"
#include "direction.h"
#include "value.h"
#include <string>
using std::stoi;

int main(int argc, char *argv[]){
    //setting the pin
    //pin 7
    gpio_export(396);
    gpio_set_dir(396, "out");

    //pin 11
    gpio_export(466);
    gpio_set_dir(466, "out");

    //pin 33
    gpio_export(389);
    gpio_set_dir(389, "out");

    //pin 40
    gpio_export(393);
    gpio_set_dir(393, "out");


    if(strcmp(argv[1],"Mode_Shine")==0){
        int num=stoi(std::string(argv[2]));

        for(int i=0;i<num;i++){
            std::cout<<i<<endl;
            //first group
            gpio_set_value(396,1);
            gpio_set_value(466,1);
            gpio_set_value(389,0);
            gpio_set_value(393,0);
            sleep(1);
            //second group
            gpio_set_value(396,0);
            gpio_set_value(466,0);
            gpio_set_value(389,1);
            gpio_set_value(393,1);
            sleep(1);
        }
    }
    else if(strcmp(argv[1],"on")==0){
        if(strcmp(argv[2],"LED1")==0){
            gpio_set_value(396,1);
        }
        else if(strcmp(argv[2],"LED2")==0){
            gpio_set_value(466,1);
        }
        else if(strcmp(argv[2],"LED3")==0){
            gpio_set_value(389,1);
        }
        else if(strcmp(argv[2],"LED4")==0){
            gpio_set_value(393,1);
        }
        else if(strcmp(argv[2],"LED1LED2")==0){
            gpio_set_value(396,1);
            gpio_set_value(466,1);
        }
        else if(strcmp(argv[2],"LED1LED3")==0){
            gpio_set_value(396,1);
            gpio_set_value(389,1);
        }
        else if(strcmp(argv[2],"LED1LED4")==0){
            gpio_set_value(396,1);
            gpio_set_value(393,1);
        }
        else if(strcmp(argv[2],"LED2LED3")==0){
            gpio_set_value(466,1);
            gpio_set_value(389,1);
        }
        else if(strcmp(argv[2],"LED2LED4")==0){
            gpio_set_value(466,1);
            gpio_set_value(393,1);
        }
        else if(strcmp(argv[2],"LED3LED4")==0){
            gpio_set_value(389,1);
            gpio_set_value(393,1);
        }
        else if(strcmp(argv[2],"LED1LED2LED3")==0){
            gpio_set_value(396,1);
            gpio_set_value(466,1);
            gpio_set_value(389,1);
        }
        else if(strcmp(argv[2],"LED1LED2LED4")==0){
            gpio_set_value(396,1);
            gpio_set_value(466,1);
            gpio_set_value(393,1);
        }
        else if(strcmp(argv[2],"LED1LED3LED4")==0){
            gpio_set_value(396,1);
            gpio_set_value(389,1);
            gpio_set_value(393,1);
        }
        else if(strcmp(argv[2],"LED2LED3LED4")==0){
            gpio_set_value(466,1);
            gpio_set_value(389,1);
            gpio_set_value(393,1);
        }
        else if(strcmp(argv[2],"LED1LED2LED3LED4")==0){
            gpio_set_value(396,1);
            gpio_set_value(466,1);
            gpio_set_value(389,1);
            gpio_set_value(393,1);
        }
    }
    else if(strcmp(argv[1],"off")==0){
        if(strcmp(argv[2],"LED1")==0){
            gpio_set_value(396,0);
        }
        else if(strcmp(argv[2],"LED2")==0){
            gpio_set_value(466,0);
        }
        else if(strcmp(argv[2],"LED3")==0){
            gpio_set_value(389,0);
        }
        else if(strcmp(argv[2],"LED4")==0){
            gpio_set_value(393,0);
        }
        else if(strcmp(argv[2],"LED1LED2")==0){
            gpio_set_value(396,0);
            gpio_set_value(466,0);
        }
        else if(strcmp(argv[2],"LED1LED3")==0){
            gpio_set_value(396,0);
            gpio_set_value(389,0);
        }
        else if(strcmp(argv[2],"LED1LED4")==0){
            gpio_set_value(396,0);
            gpio_set_value(393,0);
        }
        else if(strcmp(argv[2],"LED2LED3")==0){
            gpio_set_value(466,0);
            gpio_set_value(389,0);
        }
        else if(strcmp(argv[2],"LED2LED4")==0){
            gpio_set_value(466,0);
            gpio_set_value(393,0);
        }
        else if(strcmp(argv[2],"LED3LED4")==0){
            gpio_set_value(389,0);
            gpio_set_value(393,0);
        }
        else if(strcmp(argv[2],"LED1LED2LED3")==0){
            gpio_set_value(396,0);
            gpio_set_value(466,0);
            gpio_set_value(389,0);
        }
        else if(strcmp(argv[2],"LED1LED2LED4")==0){
            gpio_set_value(396,0);
            gpio_set_value(466,0);
            gpio_set_value(393,0);
        }
        else if(strcmp(argv[2],"LED1LED3LED4")==0){
            gpio_set_value(396,0);
            gpio_set_value(389,0);
            gpio_set_value(393,0);
        }
        else if(strcmp(argv[2],"LED2LED3LED4")==0){
            gpio_set_value(466,0);
            gpio_set_value(389,0);
            gpio_set_value(393,0);
        }
        else if(strcmp(argv[2],"LED1LED2LED3LED4")==0){
            gpio_set_value(396,0);
            gpio_set_value(466,0);
            gpio_set_value(389,0);
            gpio_set_value(393,0);
        }
    }
}
