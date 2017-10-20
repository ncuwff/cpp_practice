#include <string>
#include <iostream>
#include <sys/time.h>
#include <stdio.h>

using namespace std;

static long getcurrenttick()
{
    long tick ;
    struct timeval time_val;
    gettimeofday(&time_val , NULL);
    tick = time_val.tv_sec * 1000 + time_val.tv_usec / 1000 ;
    return tick;
}


int main( )
{
    string the_base(1024 * 1024 * 100, 'x');
    long begin =  getcurrenttick();
    for( int i = 0 ;i< 100 ;++i ) {
       string the_copy = the_base ;
    }
    fprintf(stdout,"copy 100M bytes,100 times,%ld ms \n",getcurrenttick() - begin );
}
