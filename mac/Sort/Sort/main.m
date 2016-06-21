//
//  main.m
//  Sort
//
//  Created by KH on 16/6/21.
//  Copyright © 2016年 KH. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <stdlib.h>
#include "Sort.h"

int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        int *a = NULL;
        int length = 1000;
        a = (int *)malloc(length * sizeof(int ));
        for (uint32_t i = 0; i < length; ++i)
        {
            a[i] = random()%length;
        }
        
//        bubbleSort(a, length);
        quickSort0(a, length);
        show(a, length);
        
        free(a);
    }
    return 0;
}
