//
//  InfoListNetManager.h
//  TRProject
//
//  Created by junchuanshi on 16/2/17.
//  Copyright © 2016年 Tarena. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSObject+AFNetworking.h"
#import "InfoListModel.h"
typedef NS_ENUM(NSUInteger, InfoListType) {
    InfoListTypeLastNew,
    InfoListTypeNews,
    InfoListTypeTest,
    InfoListTypeShop,
    InfoListTypeMarket,
    InfoListTypeUseCar,
    InfoListTypeTecnic,
    InfoListTypeCalture,
    InfoListTypeModify,
    InfoListTypeTravel
};

@interface InfoListNetManager : NSObject

+(id)getDataWithType:(InfoListType)type updateTime:(NSString *)updateTime page:(NSInteger )page completionHandle:kCompetionHandleBlock;
@end
