/* WizAssetsPluginExtendsCDVViewController - Extend CDVViewController so we can reach top views
 *
 * @author Ally Ogilvie
 * @copyright WizCorp Inc. [ Incorporated Wizards ] 2011
 * @file WizAssetsPluginExtendCDVViewController.h for PhoneGap
 *
 */ 

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Cordova/CDVViewController.h>



@interface CDVViewController (extendViews)


-(CDVViewController*)addWizConsole:(UITextView*)consoleView;
-(CDVViewController*)updateWizConsole:(NSString*)myText;
-(CDVViewController*)showWizConsole:(NSString*)myText;
-(CDVViewController*)hideWizConsole:(NSString*)myText;




-(CDVViewController*)createCustomLoader:(NSDictionary*)splashLoaderView;
-(CDVViewController*)hideCustomLoader:(UIView*)splashLoaderView;
-(CDVViewController*)showCustomLoader:(NSDictionary*)splashLoaderView;
-(CDVViewController*)removeCustomLoader:(UIView*)splashLoaderView;
-(CDVViewController*)updateLoaderLabel:(NSString*)loaderText;
-(CDVViewController*)rotateCustomLoader:(int)orientation;


-(CDVViewController*)showPGSplash;
-(CDVViewController*)hidePGSplash;

@end