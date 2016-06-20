//
//  List.c
//  c_list_forXcode
//
//  Created by KH on 16/6/17.
//  Copyright © 2016年 KH. All rights reserved.
//

#include "List.h"
#include <stdlib.h>

static PLIST foot_node = NULL;

PLIST create_list(unsigned count)
{
    PLIST head = (PLIST )malloc(sizeof(LIST));
    head->next = NULL;
    head->node = 0;
    
    PLIST next = head;
    PLIST temp = NULL;
    for (unsigned i = 1; i < count; ++i)
    {
        temp = (PLIST )malloc(sizeof(LIST));
        temp->next = NULL;
        temp->node = i;
        
        next->next = temp;
        next = temp;
    }
    foot_node = next;
    return head;
}

void show_list(PLIST list)
{
    PLIST temp = list;
    while (temp != NULL && temp->next != NULL)
    {
        printf("%u\n",temp->node);
        temp = temp->next;
    }
}

unsigned list_count(PLIST head)
{
    unsigned count = 1;
    PLIST temp = head;
    if (foot_node == NULL)
    {
        while (temp != NULL && temp->next != NULL)
        {
            temp = temp->next;
            count++;
        }
        foot_node = temp;
        foot_node->node = count;
    }
    
    return foot_node->node;
}

void add_node()
{
    PLIST new_node = (PLIST )malloc(sizeof(LIST));
    new_node->next = NULL;
    new_node->node = ++foot_node->node;
    
    PLIST temp = foot_node;
    if (foot_node == NULL)
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
    }
    foot_node = new_node;
    temp->next = new_node;
}

void delete_list(PLIST head)
{
    PLIST temp = head;
    PLIST temp1 = temp;
    while (temp != NULL && temp->next != NULL)
    {
        temp1 = temp->next = temp->next->next;
        free(temp);
        temp = temp1;
    }
}