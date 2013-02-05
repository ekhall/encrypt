#import <CoreData/CoreData.h>

@interface Task : NSManagedObject

@property NSString *text;
@property NSString *text2;
@property NSDate *completedAt;
@property NSData *encryptedText;

@property (nonatomic, getter = isCompleted) BOOL completed;

@end
