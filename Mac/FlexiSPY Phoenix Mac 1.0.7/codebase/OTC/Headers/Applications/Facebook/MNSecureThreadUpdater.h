//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  4 2016 10:44:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MNBouncedMessageTracker, MNSecureMessagingLinkDeletionSender, MNSecureMessagingMessagingCollectionAddress, MNSecureMessagingStore;
@protocol MNSecureMessageSendListening, MNSecureMessagingReadReceiptSending, MNSecureMessagingThreadRequestAcceptListener, MNSecureThreadMessageReceivedListening, MNSecureThreadSubscribing, OS_dispatch_queue;

@interface MNSecureThreadUpdater : NSObject
{
    MNSecureMessagingStore *_store;
    MNSecureMessagingMessagingCollectionAddress *_localAddress;
    id <MNSecureThreadSubscribing> _threadSubscriber;
    id <MNSecureMessagingReadReceiptSending> _readReceiptSender;
    MNSecureMessagingLinkDeletionSender *_linkDeletedSender;
    id <MNSecureMessagingThreadRequestAcceptListener> _threadRequestAcceptListener;
    id <MNSecureThreadMessageReceivedListening> _receivedMessageListener;
    id <MNSecureMessageSendListening> _sendListener;
    MNBouncedMessageTracker *_bouncedMessageTracker;
    NSObject<OS_dispatch_queue> *_queue;
}


- (id)_persistJobs:(id)arg1 andNotifyUpdatedThread:(id)arg2;
- (id)_threadSummaryWithCryptoStateForKey:(id)arg1;
- (void)markThreadRead:(id)arg1 until:(unsigned long long)arg2;
- (void)markThreadDelivered:(id)arg1 until:(unsigned long long)arg2;
- (void)removePendingMessage:(id)arg1 andCryptoState:(_Bool)arg2;
- (void)markMessageAsSent:(id)arg1 serverTimestamp:(unsigned long long)arg2 serverSignature:(id)arg3;
- (_Bool)persistThread:(id)arg1 withThreadStatus:(unsigned long long)arg2;
- (_Bool)applyMessage:(id)arg1 andUpdateThread:(id)arg2;
- (id)applyOutgoingMessage:(id)arg1 andUpdateThread:(id)arg2 reportableContent:(id)arg3;
- (id)applySummaryUpdate:(id)arg1;
- (id)initWithStore:(id)arg1 localAddress:(id)arg2 threadSubscriber:(id)arg3 receivedMessageListener:(id)arg4 readReceiptSender:(id)arg5 linkDeletedSender:(id)arg6 sendListener:(id)arg7 bouncedMessageTracker:(id)arg8 queue:(id)arg9;

@end

