//
//  MyUITableViewController.h
//  ToDoManager
//
//  Created by Алексей on 08.04.16.
//  Copyright © 2016 Alexey. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DPHandlesMOC.h"
#import "DPHandlesToDoEntity.h"

@interface MyUITableViewController : UITableViewController <DPHandlesMOC>

-(void) receiveMOC:(NSManagedObjectContext *)incomingMOC;

@end
