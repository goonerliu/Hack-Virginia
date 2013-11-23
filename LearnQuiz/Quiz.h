//
//  Quiz.h
//  LearnQuiz
//
//  Created by Dennis Liu on 11/23/13.
//  Copyright (c) 2013 Dennis Liu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Quiz : NSObject
@property (nonatomic,strong) NSMutableArray * movieArray; //Previous Property
@property (nonatomic, assign) NSInteger correctCount;
@property (nonatomic, assign) NSInteger incorrectCount;
@property (nonatomic, assign) NSInteger quizCount;
@property (nonatomic, readonly, strong) NSString * quote;
@property (nonatomic, readonly, strong) NSString * ans1;
@property (nonatomic, readonly, strong) NSString * ans2;
@property (nonatomic, readonly, strong) NSString * ans3;
@property (nonatomic, readonly, strong) NSString * ans4;

- (id)initWithQuiz:(NSString*)plistName;//Previous Method
-(void) nextQuestion: (NSUInteger) idx;
-(BOOL) checkQuestion: (NSUInteger) question forAnswer: (NSUInteger) answer;

@end
