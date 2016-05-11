//
//  DPHandlesToDoEntity.h
//  ToDoManager
//
//  Created by Алексей on 08.04.16.
//  Copyright © 2016 Alexey. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ToDoEntity.h"


@protocol DPHandlesToDoEntity <NSObject>

-(void) receiveToDoEntity:(ToDoEntity *)incomingToDoEntity;

@end
