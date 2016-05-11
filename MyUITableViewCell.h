//
//  MyUITableViewCell.h
//  ToDoManager
//
//  Created by Алексей on 09.04.16.
//  Copyright © 2016 Alexey. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ToDoEntity.h"

@interface MyUITableViewCell : UITableViewCell

@property (strong,nonatomic) ToDoEntity *localToDoEntity;
@property (weak, nonatomic) IBOutlet UILabel *toDoTitleLabel;
@property (weak, nonatomic) IBOutlet UILabel *toDoDueDateLabel;

-(void) setInternalFields:(ToDoEntity *)incomingToDoEntity;

@end
