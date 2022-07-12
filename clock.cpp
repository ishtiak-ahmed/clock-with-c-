#include <iostream>
#include <unistd.h>
using namespace std;

int main(void){
  int hours = 11;
  int minutes = 59;
  int seconds = 50;
  char ampm[4] = " am";

  while(1){
    system("clear");
    char hh;
    char mm;
    char ss;
    if(hours < 10){
      hh = '0';
    }else{
      hh = NULL;
    }
    if(minutes < 10){
      mm = '0';
    }else{
      mm = NULL;
    }
    if(seconds < 10){
      ss = '0';
    }else{
      ss = NULL;
    }
    cout<<hh<<hours<<" : "<<mm<<minutes<<" : "<<ss<<seconds<<ampm<<endl;
    sleep(1);
    if(seconds < 59){
      seconds++;
    }else{
      seconds = 0;
      if(minutes < 59){
        minutes++;
      }else{
        minutes = 0;
        if(hours < 12){
          hours++;
          if(hours == 12){
            if(ampm[1] == 'p'){
              ampm[1] = 'a';
            }else{
              ampm[1] = 'p';
            }
          }
        }else{
          hours = 1;
        }
      }
    }
  }
}