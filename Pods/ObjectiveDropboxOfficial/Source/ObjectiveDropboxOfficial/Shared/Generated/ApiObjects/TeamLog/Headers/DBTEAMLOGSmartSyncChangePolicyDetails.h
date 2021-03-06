///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSmartSyncChangePolicyDetails;
@class DBTEAMPOLICIESSmartSyncPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SmartSyncChangePolicyDetails` struct.
///
/// Changed default Smart Sync setting for team members.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSmartSyncChangePolicyDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New smart sync policy.
@property (nonatomic, readonly, nullable) DBTEAMPOLICIESSmartSyncPolicy *dNewValue;

/// Previous smart sync policy.
@property (nonatomic, readonly, nullable) DBTEAMPOLICIESSmartSyncPolicy *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue New smart sync policy.
/// @param previousValue Previous smart sync policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(nullable DBTEAMPOLICIESSmartSyncPolicy *)dNewValue
                    previousValue:(nullable DBTEAMPOLICIESSmartSyncPolicy *)previousValue;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SmartSyncChangePolicyDetails` struct.
///
@interface DBTEAMLOGSmartSyncChangePolicyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSmartSyncChangePolicyDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGSmartSyncChangePolicyDetails`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSmartSyncChangePolicyDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGSmartSyncChangePolicyDetails *)instance;

///
/// Deserializes `DBTEAMLOGSmartSyncChangePolicyDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSmartSyncChangePolicyDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGSmartSyncChangePolicyDetails`
/// object.
///
+ (DBTEAMLOGSmartSyncChangePolicyDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
