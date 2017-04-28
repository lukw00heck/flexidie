/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"
//
//#import "ReaderControllerDelegate-Protocol.h"
//#import "StoreBannerDelegate-Protocol.h"
//#import "WebUIBrowserLoadingControllerDelegate-Protocol.h"
//
//@class BrowserReaderView, CALayer, NSCountedSet, NSDictionary, NSMutableArray, NSMutableSet, NSString, NSTimer, NSURL, NSURLRequest, PageLoadStatistics, QuickLookDocument, QuickLookDocumentController, ReaderContext, SecurityInfo, StoreBanner, TabBarItem, TabButton, UIColor, UIImage, UIWebBrowserView, UIWebPDFViewHandler, WebDownload, WebUIBrowserLoadingController;
//
//@interface ≈ : NSObject <ReaderControllerDelegate, WebUIBrowserLoadingControllerDelegate, StoreBannerDelegate>
//{
//    int _retainCount;
//    id <TabDocumentDelegate> _delegate;
//    NSString *_uuid;
//    UIWebBrowserView *_browserView;
//    QuickLookDocumentController *_quickLookDocumentController;
//    BOOL _quickLookDocumentCheckCompleted;
//    UIWebPDFViewHandler *_pdfViewHandler;
//    float _zoomScale;
//    CALayer *_holdingLayer;
//    TabButton *_tabButton;
//    TabBarItem *_tabBarItem;
//    WebUIBrowserLoadingController *_loadingController;
//    NSURL *_responseURL;
//    int _downloadingFileType;
//    WebDownload *_fileDownload;
//    NSString *_fileDownloadPath;
//    QuickLookDocument *_quickLookDocument;
//    NSString *_startURLString;
//    NSURLRequest *_failedRequest;
//    BOOL _reloadAfterResume;
//    BOOL _reloadingFailedRequest;
//    NSString *_EVOrganizationName;
//    NSURL *_originatingURL;
//    NSURL *_tabReuseURL;
//    struct CGPoint _scrollPoint;
//    BOOL _omittedFromTabExposeButtonCount;
//    BOOL _isBlankDocument;
//    BOOL _isPopup;
//    int _thumbnailStatus;
//    BOOL _autoUpdatesThumbnail;
//    struct CGRect _screenShotFrame;
//    BOOL _suspended;
//    BOOL _hibernated;
//    BOOL _allowURLAsTitle;
//    BOOL _loadWasUserDriven;
//    BOOL _watchingProgressForStall;
//    NSTimer *_progressStalledTimer;
//    BOOL _progressStalled;
//    BOOL _progressCanStall;
//    BOOL _waitingForImportantSubresources;
//    long long _downloadBytesExpected;
//    unsigned int _downloadBytesLoaded;
//    int _resourcesCurrentlyLoadingCount;
//    NSCountedSet *_subresourceHostsCurrentlyLoading;
//    NSMutableSet *_knownResponsiveSubresourceHosts;
//    BOOL _isActive;
//    BOOL _isPagePaused;
//    BOOL _isClosed;
//    UIColor *_bodyBackgroundColor;
//    double _lastViewedTime;
//    NSMutableArray *_alerts;
//    NSDictionary *_backForwardListDictionary;
//    PageLoadStatistics *_stats;
//    BOOL _isWaitingForLastDraw;
//    struct __CFRunLoopObserver *_mainRunLoopDrawObserver;
//    struct {
//        int version;
//        void *info;
//        void *retain;
//        void *release;
//        void *copyDescription;
//    } _mainRunLoopDrawObserverContext;
//    void *_internal;
//    BOOL _showingSecurityWarningPage;
//    BOOL _loadingSecurityWarningPage;
//    SecurityInfo *_provisionalSecurityInfo;
//    ReaderContext *_readerContext;
//    BrowserReaderView *_browserReaderView;
//    BOOL _hasDoneReaderAvailabilityDetection;
//    NSTimer *_readerAvailabilityDetectionTimer;
//    BOOL _keepReadingListBookmarkIDForNextCommit;
//    unsigned int _readingListBookmarkID;
//    BOOL _userHasManipulatedVisibleRegion;
//    BOOL _wasOpenedFromLink;
//    BOOL _wasOpenedFromHistory;
//    unsigned int _downloadBackgroundTaskIdentifier;
//    unsigned int _resourceLoadBackgroundTaskIdentifier;
//    double _pageLoadStartTime;
//    double _firstVisualLayoutTime;
//    double _pageLoadStopTime;
//    double _lastLoadCommittedTime;
//    BOOL _loadWasStartedByUserClick;
//    BOOL _goingBackAfterQuickStop;
//    BOOL _clearVisitedLinkStyleAfterQuickStop;
//    BOOL _isShowingReader;
//    BOOL _shouldRestoreReader;
//    int _readerViewTopScrollOffset;
//    int _externalAppRedirectState;
//    NSDictionary *_initialArticleScrollDictionaryForCloudTab;
//    BOOL _usesMinimalTiling;
//    StoreBanner *_storeBanner;
//    UIImage *siteCustomIcon;
//    BOOL siteCustomIconPrecomposed;
//    BOOL showingErrorPage;
//}
@interface TabDocument (IOS6)



@property(nonatomic) BOOL showingErrorPage; // @synthesize showingErrorPage;
@property(nonatomic) int externalAppRedirectState; // @synthesize externalAppRedirectState=_externalAppRedirectState;
@property(nonatomic) unsigned int readingListBookmarkID; // @synthesize readingListBookmarkID=_readingListBookmarkID;
@property(nonatomic) BOOL siteCustomIconPrecomposed; // @synthesize siteCustomIconPrecomposed;
@property(retain, nonatomic) UIImage *siteCustomIcon; // @synthesize siteCustomIcon;
//@property(retain, nonatomic) StoreBanner *storeBanner; // @synthesize storeBanner=_storeBanner;
@property(nonatomic) BOOL usesMinimalTiling; // @synthesize usesMinimalTiling=_usesMinimalTiling;
@property(nonatomic) int readerViewTopScrollOffset; // @synthesize readerViewTopScrollOffset=_readerViewTopScrollOffset;
@property(nonatomic) BOOL shouldRestoreReader; // @synthesize shouldRestoreReader=_shouldRestoreReader;
@property(nonatomic) BOOL isShowingReader; // @synthesize isShowingReader=_isShowingReader;
//@property(readonly, nonatomic) BrowserReaderView *browserReaderView; // @synthesize browserReaderView=_browserReaderView;
@property(nonatomic, getter=isOmittedFromTabExposeButtonCount) BOOL omittedFromTabExposeButtonCount; // @synthesize omittedFromTabExposeButtonCount=_omittedFromTabExposeButtonCount;
//@property(retain, nonatomic) QuickLookDocumentController *quickLookDocumentController; // @synthesize quickLookDocumentController=_quickLookDocumentController;
@property(copy) NSURL *originatingURL; // @synthesize originatingURL=_originatingURL;
@property(nonatomic) BOOL wasOpenedFromLink; // @synthesize wasOpenedFromLink=_wasOpenedFromLink;
@property(readonly, nonatomic) CALayer *holdingLayer; // @synthesize holdingLayer=_holdingLayer;
//@property(retain, nonatomic) QuickLookDocument *quickLookDocument; // @synthesize quickLookDocument=_quickLookDocument;
@property(retain, nonatomic) NSString *fileDownloadPath; // @synthesize fileDownloadPath=_fileDownloadPath;
//@property(retain, nonatomic) WebDownload *fileDownload; // @synthesize fileDownload=_fileDownload;
//- (id).cxx_construct;
- (void)shouldPinStoreBanner:(BOOL)arg1;
- (void)dismissStoreBanner;
- (BOOL)supportsFindOnPage;
- (void)setClosed:(BOOL)arg1;
- (BOOL)isClosed;
- (void)setUserHasManipulatedVisibleRegion:(BOOL)arg1;
- (void)setLastViewedTime:(double)arg1;
- (double)lastViewedTime;
- (void)finishSimulatedClick;
- (void)beginSimulatedClickForURL:(id)arg1;
- (BOOL)isSimulatingClick;
- (void)download:(id)arg1 didFailWithError:(id)arg2;
- (void)downloadDidFinish:(id)arg1;
- (void)_showProfileInstallAlert;
- (void)download:(id)arg1 didReceiveResponse:(id)arg2;
- (void)download:(id)arg1 didReceiveDataOfLength:(unsigned int)arg2;
- (void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2;
- (void)downloadDidBegin:(id)arg1;
- (void)_clearFileDownloadState;
- (BOOL)isImportantDocument;
- (void)endResourceLoadBackgroundTask;
- (void)beginResourceLoadBackgroundTask;
- (void)endDownloadBackgroundTask;
- (void)beginDownloadBackgroundTask:(id)arg1;
- (void)clearSearchEngineScriptObjects:(id)arg1;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (BOOL)webView:(id)arg1 shouldChangeSelectedDOMRange:(id)arg2 toDOMRange:(id)arg3 affinity:(int)arg4 stillSelecting:(BOOL)arg5;
- (void)webView:(id)arg1 unableToImplementPolicyWithError:(id)arg2 frame:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)_showGenericDownloadAlert;
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (id)resultOfLoadingURL:(id)arg1;
- (id)resultOfLoadingRequest:(id)arg1 inFrame:(id)arg2;
- (void)_decidePolicyForAction:(id)arg1 request:(id)arg2 frame:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (id)_readingListArchiveNextPageLinkForRequest:(id)arg1 webFrame:(id)arg2;
- (void)_redirectToExternalNavigationResult:(id)arg1 fromOriginalURL:(id)arg2;
- (BOOL)_shouldPromptUserForExternalNavigationResult:(id)arg1;
- (void)_queueAlertForRedirectToExternalNavigationResult:(id)arg1 fromOriginalURL:(id)arg2;
- (void)_addInvalidURLAlert;
- (void)_addNoFeedAppSupportAlert;
- (BOOL)_shouldAskAboutInsecureFormSubmissionForAction:(id)arg1 andURL:(id)arg2;
- (void)_didRedirectToAnotherApp:(id)arg1 userCancelled:(BOOL)arg2;
- (void)_ignorePolicyListener:(id)arg1;
- (void)webView:(id)arg1 resource:(id)arg2 didCancelAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (BOOL)webView:(id)arg1 resource:(id)arg2 canAuthenticateAgainstProtectionSpace:(id)arg3 forDataSource:(id)arg4;
- (id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (id)webThreadWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)webThreadWebView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)webThreadWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)_decrementCurrentlyLoadingResourceCount;
- (void)_incrementCurrentlyLoadingResourceCount;
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (double)lastPageLoadTime;
- (double)lastPageVisualLayoutTime;
- (void)_notifyPageLoadDidFinishIfNecessary;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webThreadWebViewDidLayout:(id)arg1;
- (void)showStoreBannerIfNecessary;
- (void)_watchProgressForStall;
- (void)_progressDidStall;
- (void)_webThreadUpdateProgressCanStall;
- (void)_resetProgressStalled;
- (void)_cancelProgressStalledTimer;
- (BOOL)progressStalled;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (id)_webClip;
- (void)_createPageLoadStatistics;
- (void)restoreStateFromHistoryItem:(id)arg1 forWebView:(id)arg2;
- (void)saveStateToHistoryItem:(id)arg1 forWebView:(id)arg2;
- (void)updateViewHierarchyForDocumentViewNewLoad:(id)arg1;
- (void)updateViewHierarchyForDocumentViewLoadComplete:(id)arg1;
- (void)updateViewHierarchyForFirstNonEmptyLayoutInFrame:(id)arg1;
- (void)webViewDidDrawDocument;
- (void)_PPTCheckDidDraw;
- (void)_PPTDocumentFinishedLoadingNotification:(BOOL)arg1;
- (void)_updatePageLoadStatistics;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (id)EVOrganizationName;
- (void)browserLoadingControllerDidUpdateSecurity:(id)arg1;
- (BOOL)isSecure;
- (int)securityLevel;
- (id)forwardListControllerWithLimit:(int)arg1;
- (id)backListControllerWithLimit:(int)arg1;
- (void)browserLoadingControllerDidUpdateBackForward:(id)arg1;
- (BOOL)canGoForward;
- (BOOL)canGoBack;
- (BOOL)currentPageLoadedFromReadingList;
- (BOOL)loadWasUserDriven;
- (void)clearBackForwardCache;
- (void)destroyAllPlugIns;
- (BOOL)pluginsAreRunning;
- (void)browserLoadingControllerWillStartUserDrivenLoad:(id)arg1;
- (void)reload;
- (void)goForward;
- (void)goBack;
- (void)stopLoading;
- (void)loadCloudTab:(id)arg1;
- (void)loadUserTypedAddress:(id)arg1;
- (void)loadBookmarkURL:(id)arg1 updatingReadingListBookmarkWithBookmarkID:(unsigned int)arg2;
- (void)loadURL:(id)arg1 userDriven:(BOOL)arg2;
- (void)loadWebClip:(id)arg1 userDriven:(BOOL)arg2;
- (void)loadRequest:(id)arg1 userDriven:(BOOL)arg2;
- (void)browserLoadingController:(id)arg1 willLoadRequest:(id)arg2 userDriven:(BOOL)arg3;
- (BOOL)browserLoadingControllerShouldShowProvisionalURLs:(id)arg1;
- (id)titleForNewBookmark;
- (id)title;
- (BOOL)hasQuickLookContent;
- (BOOL)isPDFDocument;
- (BOOL)isLoading;
- (void)setLoading;
- (void)browserLoadingController:(id)arg1 didFinishLoadingWithError:(id)arg2 dataSource:(id)arg3;
- (void)browserLoadingControllerDidStartLoading:(id)arg1;
- (void)_updateTabThumbnailForDoneLoading;
- (id)UUID;
- (void)setUUID:(id)arg1;
- (void)browserLoadingControllerDidUpdateURL:(id)arg1;
- (void)clearTabReuseURL;
- (void)setTabReuseURL:(id)arg1;
- (id)tabReuseURL;
- (id)URLForSharing;
- (id)URL;
- (void)_setResponseURL:(id)arg1;
- (id)browserLoadingController:(id)arg1 userVisibleStringForURL:(id)arg2;
- (void)browserLoadingControllerDidUpdateURLString:(id)arg1;
- (id)URLStringWithoutScheme;
- (id)URLString;
- (void)setScrollPoint:(struct CGPoint)arg1;
- (struct CGPoint)scrollPoint;
- (void)_progressChanged:(id)arg1;
- (void)browserLoadingControllerDidUpdateEstimatedProgress:(id)arg1;
- (float)estimatedProgress;
- (void)updateBackgroundColor:(struct CGColor *)arg1;
- (id)bodyBackgroundColor;
- (BOOL)isPopup;
- (void)setPopup:(BOOL)arg1;
- (struct CGRect)screenShotFrame;
- (void)setScreenShotFrame:(struct CGRect)arg1;
- (void)willClose;
- (void)_closeTabDocumentAnimated:(BOOL)arg1;
- (void)setActive:(BOOL)arg1;
- (void)becameActive;
- (void)setDelegate:(id)arg1;
- (id)tabBarItem;
- (id)tabButton;
- (id)frontView;
- (void)setZoomScale:(float)arg1;
- (float)zoomScale;
- (id)pdfHandler;
- (id)pdfView;
- (id)browserView;
- (int)thumbnailStatus;
- (BOOL)needsThumbnailUpdate;
- (void)setThumbnailNeedsRedrawForReader;
- (void)setSuspendedWhileActiveTab;
- (void)setNeedsNewThumbnail;
- (BOOL)isBlankDocument;
- (void)setBlankDocument:(BOOL)arg1;
- (void)_updateTilingArea;
- (id)cachedSnapshot;
- (void)setAutoUpdatesThumbnail:(BOOL)arg1;
- (BOOL)autoUpdatesThumbnail;
- (void)processUpdatedSnapshot:(id)arg1 animated:(BOOL)arg2;
- (void)updateTabThumbnail;
- (void)updateTabThumbnailAnimated:(BOOL)arg1 synchronous:(BOOL)arg2;
- (void)_saveBackForwardListToDictionary;
- (void)restoreBackForwardListFromDictionary;
- (void)_restoreTransientReadingListDataToWebHistoryItem:(id)arg1;
- (void)goToHistoryItem:(id)arg1;
- (void)goToCurrentHistoryItem;
- (id)backForwardListDictionary;
- (void)setBackForwardListDictionary:(id)arg1;
- (void)removeNonVisibleTiles;
- (void)setPagePaused:(BOOL)arg1 withEvents:(BOOL)arg2;
- (void)resume;
- (void)suspendForEventsOnly:(BOOL)arg1;
- (BOOL)isHibernated;
- (void)unhibernate;
- (void)hibernate;
- (id)initWithTitle:(id)arg1 URL:(id)arg2 UUID:(id)arg3 hibernated:(BOOL)arg4 readingListBookmarkID:(unsigned int)arg5;
- (void)_closeButtonPressed;
- (void)browserLoadingControllerDidUpdateTitle:(id)arg1;
- (void)_updateTabBarTitle;
- (id)tabBarTitle;
- (id)rawTitle;
- (id)_titleIncludeLoading:(BOOL)arg1 allowURLStringFallback:(BOOL)arg2;
- (void)dealloc;
- (void)_prepareWebViewRelease;
- (void)_createDocumentView;
- (BOOL)consoleMessagesEnabled;
- (void)didReadDefaults;
- (void)_updateTextSize;
- (BOOL)_isAnyTestRunning;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (id)init;
- (void)reloadAfterError;
- (void)clearFailedRequest;
- (void)handlePolicyError:(id)arg1 forFrame:(id)arg2;
- (void)handleFrameLoadError:(id)arg1 forDataSource:(id)arg2;
- (id)_titleForError:(id)arg1;
- (void)_setFailedRequest:(id)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (BOOL)handleCertificateError:(id)arg1 forDataSource:(id)arg2;
- (void)showErrorPageWithTitle:(id)arg1 bodyText:(id)arg2 forError:(id)arg3;
- (void)addAlertWithTitle:(id)arg1 bodyText:(id)arg2;
- (void)addFormAlertWithTitle:(id)arg1 listener:(id)arg2;
- (id)alert;
- (void)performAction:(int)arg1 forAlert:(id)arg2;
- (void)_continueWithoutCredentialsUsingAlertContext:(id)arg1;
- (void)_continueAfterCertificateAlertWithContext:(id)arg1;
- (void)_loadRequest:(id)arg1 inFrame:(id)arg2;
- (void)addAlert:(id)arg1;
- (id)_genericMessageForError:(id)arg1 dataSource:(id)arg2;
- (id)_specializedMessageForError:(id)arg1 dataSource:(id)arg2;
- (id)_failingURLFromError:(id)arg1 andDataSource:(id)arg2;
- (void)_fraudulentWebsiteCheckCompletedForURL:(id)arg1 withAssessment:(int)arg2 fromProvider:(int)arg3;
- (void)checkForFraudulentWebsitesWithURL:(id)arg1;
- (void)cancelCheckForFraudulentWebsites;
- (void)_warnAboutUnsafeSiteWithSecurityInfo:(id)arg1;
- (void)setUpSecurityWarningPageController;
- (void)securityWarningPageClosePageButtonPressed;
- (void)securityWarningPageBackButtonPressed;
- (void)securityWarningPageIgnoreWarningButtonPressed;
- (void)securityWarningPageLoaded;
- (void)updateSecurityWarningPageWithSecurityInfo:(id)arg1;
- (void)hideSecurityWarningPage;
- (void)setLoadingSecurityWarningPage:(BOOL)arg1;
- (BOOL)loadingSecurityWarningPage;
- (BOOL)showingSecurityWarningPage;
- (void)showSecurityWarningPageWithSecurityInfo:(id)arg1;
- (void)commitProvisionalSecurityInfo;
- (void)setProvisionalSecurityInfo:(id)arg1;
- (id)provisionalSecurityInfo;
- (void)setUpSecurityWarningPage;
- (id)securityWarningPagePath;
- (void)_continueLoadingSite;
- (BOOL)safeBrowsingObserverIsValid;
- (void)invalidateSafeBrowsingObserver;
- (void)initializeSafeBrowsingObserver;
- (void)clearReaderScrollInformation;
- (void)updateReaderView;
- (void)willCloseReaderWebView:(id)arg1;
- (id)readerPageArchiveURL;
- (void)didClickLinkInReaderWithRequest:(id)arg1;
- (void)didChangeNextPageLoadingState:(BOOL)arg1;
- (void)didInitReaderJSController:(struct ReaderJSController *)arg1;
- (void)didDeactivateReaderWithMode:(int)arg1;
- (void)didActivateReader;
- (void)willActivateReader;
- (BOOL)networkIsReachable;
- (int)readerOperationMode;
- (BOOL)isShowingReadingListArchive;
- (BOOL)shouldShowReaderOnActive;
- (id)readerContext;
- (void)detectReaderAvailabilitySoon;
- (BOOL)isReaderAvailable;
- (BOOL)hasDoneReaderDetection;
- (void)clearReaderContext;
- (void)_clearBrowserReaderView;
- (void)createBrowserReaderViewIfNeeded;
- (void)_detectReaderAvailabilityNow;
- (void)_detectReaderAvailabilityOnWebThread;
- (void)_didDetectReaderAvailability:(BOOL)arg1;
- (void)_cancelReaderAvailabilityDetectionTimer;

@end
