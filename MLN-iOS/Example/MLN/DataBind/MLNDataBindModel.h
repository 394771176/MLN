//
//  MLNDataBindModel.h
//  LuaNative
//
//  Created by Dai Dongpeng on 2020/3/10.
//  Copyright © 2020 MoMo. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MLNDataBindModel : NSObject
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *detail;

@property (nonatomic, assign) BOOL hideIcon;
@property (nonatomic, copy) NSString *iconUrl;

@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSArray *source;

+ (instancetype)testModel;

@end


@interface MLNDatabindTableViewModel : NSObject
@property (nonatomic, strong) NSMutableArray *source;
@property (nonatomic, assign) NSUInteger tableHeight;
@property (nonatomic, assign) BOOL refresh;
+ (instancetype)testModel;
@end



@interface MLNDataBindArrayModel : NSObject
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray <MLNDataBindModel *> *source;
+ (instancetype)testModel;
@end

NS_ASSUME_NONNULL_END
