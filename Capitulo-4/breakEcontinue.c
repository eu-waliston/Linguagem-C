//
// Created by we on 10/08/23.
//

#include <stdio.h>

int main(){
    int x;
//    for(x = 1; x <= 10; x++){
//        if( x == 5) {
//            break;
//        }
//        printf("%d", x);
//    }
//    printf("\n Saiu do loop em x == %d\n", x);
//    return 0;

    for(x = 1; x <= 10; x++){
        if( x == 5) {
            continue;
        }
        printf("%d", x);
    }
    printf("\n Saiu do loop em x == %d\n", x);
    return 0;
}
