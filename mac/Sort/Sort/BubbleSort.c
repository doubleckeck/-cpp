//
//  BubbleSort.c
//  Sort
//
//  Created by KH on 16/6/21.
//  Copyright © 2016年 KH. All rights reserved.
//

#include <stdio.h>
#include "Sort.h"

int *bubbleSort(int *array,uint32_t length)
{
    for (int i = 0; i < length; ++i)
    {
        for (int j = i; j < length; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    
    return array;
}

void show(int *const array,uint32_t length)
{
    for (uint32_t i = 0; i < length; ++i)
    {
        printf("%d\n",array[i]);
    }
}