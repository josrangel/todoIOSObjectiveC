//
//  ToDoItem.h
//  TodoList
//
//  Created by KMMX on 23/10/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ToDoItem : NSObject
@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;
@end

NS_ASSUME_NONNULL_END
