//
//  CodeReaderVC.h
//  ProjectX
//
//  Created by Daniel Rodriguez on 12/23/15.
//  Copyright © 2015 Daniel Rodriguez. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface CodeReaderVC : UIViewController <AVCaptureMetadataOutputObjectsDelegate, NSXMLParserDelegate>
@property (weak, nonatomic) IBOutlet UIView *viewPreview;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *beginScanBtn;
- (IBAction)startStopReading:(id)sender;

@end
