#import <Foundation/Foundation.h>

@protocol clvc
@property (nonatomic,assign) BOOL axnAllowChanges;

@optional
-(void)insertNotificationRequest:(id)arg1 ;
-(void)modifyNotificationRequest:(id)arg1 ;
-(void)removeNotificationRequest:(id)arg1 ;
-(bool)insertNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 ;
-(bool)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 ;
-(bool)removeNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 ;
-(NSSet *)allNotificationRequests;
-(id)collectionView;
-(void)revealNotificationHistory:(BOOL)revealed;
-(void)updateNotifications;

@end
