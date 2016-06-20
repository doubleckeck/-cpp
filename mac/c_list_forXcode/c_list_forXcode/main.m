//
//  main.m
//  c_list_forXcode
//
//  Created by KH on 16/6/17.
//  Copyright © 2016年 KH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "List.h"

int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        PLIST list = create_list(11);
        for (unsigned i = 0; i < 20; i++)
        {
            add_node();
        }
        
        show_list(list);
        
        delete_list(list);
        
//        show_list(list);
    }
    return 0;
}
