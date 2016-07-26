//
//  APIDataSource.h
//  AutoCompletion
//

@import AutoCompletion;
#import <Foundation/Foundation.h>

@interface RequestObject : NSObject

@end

@interface APIDataSource : NSObject<AutoCompletionTextFieldDataSource>

@property (nonatomic,retain) NSString *requestURL;

@end