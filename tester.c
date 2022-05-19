#include <stdint.h>
#include <stdio.h>
extern void conv_ULongToChar(uint64_t value, char * output);
extern void conv_ULongToChar2(uint64_t value, char * output);
extern uint64_t fastdiv10(uint64_t value);
extern uint64_t qfastdiv10(uint64_t value);
extern uint64_t sdiv(uint64_t value);

char finalOutput[21] = {32,32,32,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

// void fastConv(uint64_t value, char * output){
//     char * end = output+20;
//     if (value == 18446744073709551615){
//         value--;
//     }

//     unsigned __int128 output = value*1844674407370955161;
//     uint64_t lower = output;
//     uint64_t upper = output >> 64;

    
    


// }



int main(void) {
 
    uint64_t errors = 0;
    uint64_t out = 0;
    for (uint64_t i = 0; i < 500000000; i ++){
        conv_ULongToChar(i, finalOutput);
        //sprintf(finalOutput,"%lu",i + (1Ul << 10));
        //out = sdiv(i);
        //out = qfastdiv10(i);
    }
        


    //     // if (i%10000 == 0){
    //     //     printf("current %lu\n",i);
    //     // }
        
    //     //
    //     //conv_ULongToChar2(10012429990+i, finalOutput);  
    //     //
    // }
    
//     printf("%lu\n",val);
//     // // 
    // uint64_t val = 402123142;//9223372036854775810;
    // conv_ULongToChar(val, finalOutput);
    // printf("%s\n",finalOutput);
//    //printf("aa\n");
    // printf("val1: %lu    val2: %lu\n",1<<31,2147483648);

    // uint64_t inpt = 1UL<<31;//2147483648;
    // printf("%lu\n",fastdiv10(inpt));

   
    //uint64_t inpt = 9223372036854775820;//2147483648;
    //printf("%lu\n",fastdiv10(inpt));

    conv_ULongToChar(1000321, finalOutput);
    printf("%s\n",finalOutput);
    //uint64_t val = -1;//2147483648;
    //printf("%lu\n",val);
    //printf("%lu\n",qfastdiv10(val));
    //printf("%lu\n",errors);
}
