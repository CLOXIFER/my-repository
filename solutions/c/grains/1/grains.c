#include "grains.h"
uint64_t square(uint8_t index){
 uint64_t sum=1;
    if (index==0){
        return 0;
    }
    for(int i=1;i<=index-1;i++){
     sum*=2; 
    }
    return sum;
}
    uint64_t total(void){
      uint64_t grand_total=0;
        for(int j=1;j<=64;j++){
          grand_total+=square(j);  
        }
        return grand_total;
    }