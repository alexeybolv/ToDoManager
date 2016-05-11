//
//  DPHandlesMOC.h
//  ToDoManager
//
//  Created by Алексей on 08.04.16.
//  Copyright © 2016 Alexey. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol DPHandlesMOC <NSObject>

-(void) receiveMOC:(NSManagedObjectContext *)incomingMOC;

@end
