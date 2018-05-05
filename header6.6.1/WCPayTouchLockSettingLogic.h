//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPaySecurityBaseControlLogic.h"

#import "WCPayOpeniOSTouchLockCgiDelegate-Protocol.h"
#import "WCPayPayPwdViewControllerDelegate-Protocol.h"

@class NSString, WCPayOpeniOSTouchLockCgi;
@protocol WCPayTouchLockSettingLogicDelegate;

@interface WCPayTouchLockSettingLogic : WCPaySecurityBaseControlLogic <WCPayPayPwdViewControllerDelegate, WCPayOpeniOSTouchLockCgiDelegate>
{
    id <WCPayTouchLockSettingLogicDelegate> _delegate;
    WCPayOpeniOSTouchLockCgi *_openCgi;
}

@property(retain, nonatomic) WCPayOpeniOSTouchLockCgi *openCgi; // @synthesize openCgi=_openCgi;
@property(nonatomic) __weak id <WCPayTouchLockSettingLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)openiOSTouchLockCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)openiOSTouchLockCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)OnVerifyPayPassword:(id)arg1 andRetToken:(id)arg2;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)verifyTouchID:(id)arg1;
- (void)openTouchLockWithToken:(id)arg1 Model:(id)arg2;
- (void)callSetupSuccess;
- (void)startLogic;
- (id)initWithData:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
