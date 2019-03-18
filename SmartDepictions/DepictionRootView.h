#import <UIKit/UIKit.h>
#import "../Headers/Headers.h"
#import "SmartCell.h"

@class DepictionTabView;
@class GetPackageCell;
@class SmartContentCell;
@class SmartDepictionDelegate;

@interface DepictionRootView : UITableView<UITableViewDataSource, UITableViewDelegate> {
	NSMutableArray<__kindof UITableViewCell<SmartCell> *> *topCells;
	NSDictionary<NSString *, NSArray<__kindof SmartContentCell *> *> *tabCells;
	NSMutableArray<__kindof UITableViewCell<SmartCell> *> *footerCells;
}
@property (nonatomic, readonly) SmartDepictionDelegate *depictionDelegate; 
@property (nonatomic, readonly) GetPackageCell *getPackageCell;
@property (nonatomic, readonly) DepictionTabView *tabController;
- (instancetype)initWithDepictionDelegate:(SmartDepictionDelegate *)delegate;
- (void)loadDepiction;
@end