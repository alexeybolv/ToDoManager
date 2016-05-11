//
//  MyUITableViewCell.m
//  ToDoManager
//
//  Created by Алексей on 09.04.16.
//  Copyright © 2016 Alexey. All rights reserved.
//

#import "MyUITableViewCell.h"

@interface MyUITableViewCell ()


@end

@implementation MyUITableViewCell

-(void) setInternalFields:(ToDoEntity *)incomingToDoEntity{
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc]init];
    [dateFormatter setDateStyle:NSDateFormatterShortStyle];
    [dateFormatter setTimeStyle:NSDateFormatterShortStyle];

    
    self.toDoTitleLabel.text = incomingToDoEntity.toDoTitle;
    self.toDoDueDateLabel.text = [dateFormatter stringFromDate:incomingToDoEntity.toDoDueDate];
    self.localToDoEntity = incomingToDoEntity;
}

@end
