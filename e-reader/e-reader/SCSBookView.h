//
//  SCSBookView.h
//  e-reader
//
//  Created by 张鹏 on 15/7/20.
//  Copyright © 2015年 smallCobblerStudio. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SCSBookView : UIView

@property (nonatomic,strong) NSString  *bookName;
@property (nonatomic,assign) NSInteger fontSize;
@property (nonatomic,strong) UIColor   *fontColor;

@end
