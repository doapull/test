#include <stdio.h>

// 回调函数a
void callback_a(int var_a){    
    printf("Call callback_a, var: %d\n\n", var_a);
}

// 回调函数b
/*
void callback_b(int var_b){    
    printf("Call callback_b, var: %d\n\n", var_b);
}
*/

// 回调动作
void callback_act(int a,void (*add)(int)){    
    printf("Call callback_act, var_x: %d\n\n", a);    
	add(a);

}


void main(){    
    int a = 1;
//    int b = 2;    
    callback_act(a, callback_a);    
//    callback_act(b, callback_b);    
    printf("Main program has done.\n");
}



