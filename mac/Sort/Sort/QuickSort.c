//
//  QuickSort.c
//  Sort
//
//  Created by KH on 16/6/21.
//  Copyright © 2016年 KH. All rights reserved.
//

#include <stdio.h>
#include "Sort.h"

void quickSort0(int *array, uint32_t length)
{
    quickSort(array, 0, length);
}


/**
 *  选定一个数，下标为head,大于它的放右边，小于它的房左边，然后递归即可
 */
void quickSort(int *array, uint32_t head, uint32_t tail)
{
    if (head < tail)
    {
        int low = head;
        int height = tail;
        int temp = array[low];
        while (low < height)
        {
            while (low < height && temp < array[height])
            {
                height--;
            }
            if(low < height)
            {
                array[low++] = array[height];
            }
            
            while (low < height && temp > array[low])
            {
                low++;
            }
            if (low < height)
            {
                array[height--] = array[low];
            }
            
        }
        
        array[low] = temp;
        quickSort(array, head, low - 1);
        quickSort(array, low + 1, tail);
    }
}