//
//  Sort.h
//  Sort
//
//  Created by KH on 16/6/21.
//  Copyright © 2016年 KH. All rights reserved.
//

#ifndef Sort_h
#define Sort_h
/* 输出 */
void show(int *const array,uint32_t length);

/* 冒泡排序 */
int *bubbleSort(int *array,uint32_t length);

/* 快速排序 */
void quickSort0(int *array, uint32_t length);
void quickSort(int *array, uint32_t head, uint32_t tail);

#endif /* Sort_h */
