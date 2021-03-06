//
//  SouthgisTdtMapService.h
//  TianDituFramework
//
//  Created by 吴小星 on 16/3/29.
//  Copyright © 2016年 crash. All rights reserved.
//

#import "SouthgisBaseMapService.h"
#import "TdtPOIResult.h"
#import "CarLine.h"
#import "BusLine.h"
#import "BusLineSearch.h"
#import "CarLineSearch.h"
#import "TdtPOISearchKeyWord.h"


/**
 *  @author crash         crash_wu@163.com   , 16-03-31 14:03:36
 *
 *  @brief  天地图POI搜索，公交，驾车路线搜索类
 */
@interface SGRoutePlanService : NSObject

/**
 *  @author crash         crash_wu@163.com   , 16-08-26 15:08:22
 *
 *  @brief  单例
 *
 */
+(nonnull instancetype) shareInstance;


/**
*  @author crash         crash_wu@163.com   , 16-08-26 11:08:49
*
*  @brief  天地图POI搜索
*
*  @param keyWordEntity 搜索类型实体
*  @param success       搜索成功返回Block
*  @param failed        失败block
*/
-(void)poiSearch:
(nullable TdtPOISearchKeyWord *)keyWordEntity success:
(nonnull void(^) (NSArray<TdtPOIResult *> *_Nullable array ))success failed:
(nonnull FailedBlock)failed;


/**
 *  @author crash         crash_wu@163.com   , 16-03-17 11:03:18
 *
 *  @brief  驾车路线规划
 
 *  @param driverEntity 驾车路线请求参数实体
 *  @param success      路线请求成功bolck
 *  @param fail         路线请求失败bolck
 */
-(void)carLineSearch :
(nullable CarLineSearch *)driverEntity success:
(nonnull void( ^)(NSArray<CarLine *> * _Nullable array))success andFail:
(nonnull FailedBlock)fail;


/**
 *  @author crash         crash_wu@163.com   , 16-08-26 11:08:33
 *
 *  @brief  天地图公交路线查询
 *
 *  @param entity  公交路线请求参数实体
 *  @param success 路线请求成功bolck
 *  @param failed  路线请求失败bolck
 */
-(void)busLineSearch:
(nullable BusLineSearch *)entity success:
(nonnull void(^) (NSArray<BusLine *> * _Nullable array ))success failed:
(nonnull FailedBlock)failed;

@end
