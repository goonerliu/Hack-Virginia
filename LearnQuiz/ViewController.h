//
//  ViewController.h
//  LearnQuiz
//
//  Created by Dennis Liu on 11/23/13.
//  Copyright (c) 2013 Dennis Liu. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Quiz;@interface ViewController : UIViewController
@property (nonatomic,assign) NSInteger quizIndex;
@property (nonatomic, strong) Quiz * quiz;
@end
