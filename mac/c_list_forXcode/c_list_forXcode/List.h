//
//  List.h
//  c_list_forXcode
//
//  Created by KH on 16/6/17.
//  Copyright © 2016年 KH. All rights reserved.
//

#ifndef List_h
#define List_h

#include <stdio.h>
typedef struct List{
    unsigned node;
    void *content;
    struct List *next;
}LIST,*PLIST;

PLIST create_list(unsigned count);
void show_list(PLIST list);
unsigned list_count(PLIST head);
void add_node();
void delete_list(PLIST head);
#endif /* List_h */
